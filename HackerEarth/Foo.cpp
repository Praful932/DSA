#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll unsigned long long
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define nl "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
ll a,b,c,d,k;
ll f(ll t)
{
    return a*t*t*t + b*t*t + c*t + d;
}
int main()
{   
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d >> k;
        ll low =0, high = int(1e6);
        ll mid;
        ll val1, val2;
        ll ans = 0;
        if(d>=k)
        {
            ans = 0;
        }
        else
        {
        while(low<=high)
        {
            mid = low + (high - low)/2;
            val1 = f(mid);
            val2 = f(mid + 1);

            if(val1 <= k && val2 > k)
            {
                ans = mid;
                break;
            }
            else if(val1 > k)
            {   
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

