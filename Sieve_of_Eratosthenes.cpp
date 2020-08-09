#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(ll i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
void sieve(ll a,ll b)
{
    vector<bool> isprime(b+1,true);
    isprime[0] = isprime[1] = false;
    isprime[2] = true;
    for(ll i=2;i*i<=b;i++)
    {
        if(isprime[i])
        for(ll j=i*i;j<=b;j+=i)
            isprime[j]= false;
    }
    ll count=0;
    for(ll i=a;i<=b;i++)
        if(isprime[i])
            count +=1;
    cout<<"Count:"<<count<<newline
}
int main()
{
    OJ;
    cout<<"Enter two numbers to check no. of prime numbers between them:\n";
    ll a,b;
    cin>>a>>b;
    sieve(a,b);
    return 0;
}