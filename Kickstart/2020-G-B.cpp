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

int main()
{   
    OJ;
    int t;
    cin >> t;
    int t1 = t;
    while (t--)
    {
        ll maxsum = 0;
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int> (n, 0));

        loop(0,n)
        {
            for(int j=0; j<n; j++)
                cin >> a[i][j];
        }

        map<int, ll> diagsum;

        // diagonal sum
        
        loop(0,n)
        {
            for(int j=0;j<n;j++)
            {
                diagsum[i-j] += a[i][j];
            }
        }
        
        for(auto i:diagsum)
            maxsum = max(maxsum, i.second);

        cout<<"Case #"<<t1-t<<": "<<maxsum<<nl
    }
    return 0;
}

