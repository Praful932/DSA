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
bool f(vector<int> a, int bound, int n_transfers)
{
    // If already holds
    if(a[0] >= bound)
        return true;
    
    // lol
    ll hafta = 0;
    int n = a.size();
    loop(0, n)    
    {
        hafta += bound - a[i];

        if(hafta)
        {
            if(hafta > n_transfers * (n-i-1) * (i + 1))
                return false;
        }
    }
    return true;
}
signed main()
{   
    // OJ;
    fastio;
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    
    loop(0,n)
        cin >> a[i];
    
    sort(a.begin(), a.end());

    int low = 0, high = 1e9;
    int mid;
    int ans = 0;
    while(low <= high)
    {   
        mid = low + (high - low)/2;
        if(f(a, mid, k))
        {
            low = mid + 1;
            ans = max(mid, ans);
        }
        else
            high = mid - 1;
    }
    cout<<ans<<nl

    return 0;
}

