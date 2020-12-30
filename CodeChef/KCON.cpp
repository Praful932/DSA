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

int kadane(vector<int> a)
{
    // always initialize first ele in kadane..
    ll localsum = a[0];
    ll globalsum = a[0];
    
    loop(0, a.size())
    {
        // localsum keeps track of maximum possible possible at ith position including a[i]
        localsum = max(a[i], a[i] + localsum);
        globalsum = max(localsum, globalsum);
    }

    return globalsum;
}
signed main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        int totalsum =0;
        loop(0,n)
            cin >> a[i], totalsum += a[i];
        
        
        int ans = 0;

        if(k == 1)
        {
            ans += kadane(a);
        }
        else
        {
            loop(0, n)
                    a.push_back(a[i]);
            ans = kadane(a);
            if(totalsum >=0)
                ans += (k - 2) * totalsum;
        }
        cout<<ans<<nl
    }
    return 0;
}

