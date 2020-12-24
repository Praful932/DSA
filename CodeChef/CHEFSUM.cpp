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
        int n;
        cin >> n;
        vector<int> a(n + 1, 0);
        loop(1,n + 1)
            cin >> a[i];
        
        int minsum = LLONG_MAX;
        int index;

        vector<int> prefixsum(n + 1, 0);
        vector<int> suffixsum(n + 2, 0);

        loop(1, n + 1)
            prefixsum[i] += prefixsum[i - 1] + a[i];
        

        for(int i=n;i>0;i--)
            suffixsum[i] += suffixsum[i + 1] + a[i];


        loop(1, n + 1)
        {
            if((prefixsum[i] + suffixsum[i]) < minsum)
                minsum = prefixsum[i] + suffixsum[i], index = i;
        }
        cout<<index<<nl
    }
    return 0;
}

