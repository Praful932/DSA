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
signed main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        // even and even
        ans += (a/2) * (b/2);
        // odd and odd
        ans += ((a+1)/2) * ((b+1)/2);
        cout<<ans<<nl
    }
    return 0;
}

