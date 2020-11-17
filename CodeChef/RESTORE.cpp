#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define nl "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

vector<int> primes;
void sieve(int a,int b)
{
    vector<bool> isprime(b+1,true);
    isprime[0] = isprime[1] = false;
    isprime[2] = true;
    for(int i=2;i*i<=b;i++)
    {
        if(isprime[i])
        for(int j=i*i;j<=b;j+=i)
            isprime[j]= false;
    }
    for(ll i=a;i<=b;i++)
        if(isprime[i])
            primes.push_back(i);
}
int main()
{   
    OJ;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sieve(2,4e6);
    while (t--)
    {
        int n;
        cin >> n;
        int primeindex = 0;
        vector<int> a(n + 1, 0);
        // index starts from 1
        loop(1,n + 1)
            cin >> a[i];
        map<int,bool> assigned;
        for(int i=n;i>0;i--)
        {   
            if(assigned[a[i]])
            {
                a[i] = a[a[i]];
            }
            else
            {
                // if not assigned
                assigned[i] = true;
                a[i] = primes[primeindex];
                primeindex++;
            }
        }
        loop(1,n + 1)
            cout<<a[i]<<" ";
        cout<<nl
    }
    return 0;
}

