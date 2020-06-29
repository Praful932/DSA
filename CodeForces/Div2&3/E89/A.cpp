#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
ll val(ll n)
{
    return floor((n+n)/3.0);
}
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b,e=0;
        cin >> a >> b;
        if((a<1 || b<1) || (a==1 && b==1))
            cout<<e<<newline
        else
        {
            if(a==b)
            {
                cout<<val(a)<<newline;
            }
            else
            {
                ll m = 2 * min(a,b);
                if(max(a,b) >= m)
                    cout<<min(a,b)<<newline
                else
                    cout<<abs(a - b) + val(abs(min(a,b) - abs(a-b)))<<newline
            }
        }
    }
    return 0;
}