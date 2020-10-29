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

/*
    Problem Link - https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/
*/
ll f(ll a,ll b,ll c,ll x)
{
    return a*x*x + b*x + c;
}
int main()
{   
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,k;
        cin >> a >> b >> c >> k;
        ll ans = 1e6;
        int low = 0, high = 1e5;
        while(low<=high)
        {
            ll mid = (low + high)/2;
            ll val = f(a,b,c,mid);
            // cout<<"Mid :"<<" "<<mid<<" "<<val<<nl

            // still our x is too small
            if(val < k)
                low = mid + 1;
            else
            {
                // Possible match but we have to find least x for which the function satisfies
                // So a lower x may exist for which the function satisifies
                // f(x) >= k
                ans = min(ans, mid);
                high = mid - 1;
            }
        }
        cout<<ans<<nl
    }
    return 0;
}

