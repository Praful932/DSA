#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
bool checkpower(ll x)
{
    return x && (!(x &(x-1)));
}
int firstsetpos(ll n)
{
    return log2(n & -n) + 1;
}
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        ll ts;
        cin >> ts;
        if(ts%2==1) // if ts odd
            cout<<ts/2<<newline
        else
        {
            if(checkpower(ts))
                cout<<0<<newline
            else 
            {
                ll divisor = pow(2, firstsetpos(ts));    
                cout<<ts/divisor<<newline
            }
        }
    }
    return 0;
}