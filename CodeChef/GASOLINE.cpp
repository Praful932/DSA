#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define int long long
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
        // fuel capacity of ith car
        vector<int> f(n + 1, 0);
        // cost of fuel of ith vehicle per litre
        vector<int> c(n + 1, 0);
        bool check = false;

        loop(1,n + 1)
            cin >> f[i];
        loop(1,n + 1)
            cin >> c[i];

        // cost per litre and total fuel capacity
        vector<pair<int, int>> cf;
        // buffer
        cf.push_back({0,0});
        loop(1, n + 1)
            cf.push_back({c[i], f[i]});

        // sort by cost
        sort(cf.begin(), cf.end());

        int coins_needed = 0;
        // total dist to cover
        int remaining_dist = n;
        loop(1, n + 1)
        {
            int cost_per_litre = cf[i].first;
            int fuel_capacity = cf[i].second;
            // if car can carry fuel
            if(fuel_capacity)
            {
                // check if capacity of vehicle is strictly less than what I want to cover
                if(remaining_dist > fuel_capacity)
                {
                    coins_needed += (fuel_capacity * cost_per_litre);
                    remaining_dist -= fuel_capacity;
                }
                else
                {
                    // whole distance can be covered by this car
                    coins_needed += (remaining_dist * cost_per_litre);
                    break;
                }
            }
        }
        cout<<coins_needed<<nl
    }
    return 0;
}

