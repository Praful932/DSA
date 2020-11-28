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
int main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = LLONG_MAX;
        ll a=0, b=0;
        bool check = false;
        loop(1, sqrt(n) + 1)
        {
            if(n % i == 0)
            {
                ll newp, newm;
                a = i;
                b = n/a;
                if((a + b) % 2 == 0)
                {
                    newp = (a + b)/2;
                    if(newp - a > 0)
                    {
                        newm = newp - a;
                        ans = min(ans, newm * newm);
                        check = true;
                    }
                }
            }
        }
        if(check)
            cout<<ans<<nl
        else
            cout<<-1<<nl
    }
    return 0;
}

