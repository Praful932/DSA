#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define int long long
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

bool f(int a,int b, int y)
{
    return (a*a) + b <= y;
}
signed main()
{   
    // ez binary search
    OJ;
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        int y;
        cin >> y;
        int ans = 0;
        loop(1, 701)
        {
            int b = i;
            if(y-b > 0)            
                ans += floor(sqrt(y*1.0 - b));
        }
        cout<<ans<<nl
    }
    return 0;
}

