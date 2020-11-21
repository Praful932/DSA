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
#define fastio \
    ios::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define int long long
const int N = 1e5 + 5;

// initially all are prime(falses)
vector<bool> composite(N + 1);
void sieve(int number)
{
    set<int> factors;
    factors.insert(1);
    loop(2, N + 1)
    {
        // if the number is composite(already marked as a multiple by another number)
        // skip number
        if(composite[i])
            continue;

        /*
            i = 3
            j = 3 + 3 = 6 
            j = 6 + 3 = 9=            j = 9 + 3 = 12
        */

        // We know that the current i is prime, so we are striking down its multiples
        // Let's check which i's will be seeing j as 6
        // 2 will strike 6, 3 will strike 6 Hmmm...
        // What about 45? i = 3 and 5, 9 will not strike since it isnt prime and will already be striked off by 3
        // So a number is always struck down by its prime factor
        for(int j = 2*i; j <= N ; j = j + i)
        {
            composite[j] = 1;
            // if the current number is seen as a multiple of some prime, then i is a prime factor of that number
            if(j == number)
                factors.insert(i);
        }
    }
    factors.insert(number);
    cout<<"Factors of "<<number<<" are\n";
    for(auto i:factors)
        cout<<i<<nl
}
signed main()
{   
    OJ;
    fastio;
    int n;
    cin >> n;
    sieve(n);
    return 0;
}

