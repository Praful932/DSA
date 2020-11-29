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
        int n;
        cin >> n;
        // fuel each car has
        vector<int> f(n + 1, 0);
        loop(1,n + 1)
            cin >> f[i];
        
        int fuel = f[1];
        int dist = 0;
        if(fuel)
        {   
            fuel--;
            dist++;
            loop(2, n + 1)
            {
                fuel += f[i];
                if(!fuel)
                    break;
                fuel--;
                dist++;
            }
            dist += fuel;
        }
        cout<<dist<<nl        
    }
    return 0;
}

