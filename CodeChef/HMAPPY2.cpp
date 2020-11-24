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
#define int long long
signed main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, k;
        cin >> n >> a >> b >> k;
        int gcd = __gcd(a,b);
        int lcm = (a*b)/gcd;

        int divlcm = n/lcm;
        int diva = n/a - divlcm;
        int divb = n/b - divlcm;

        int score = diva + divb;

        if(score >= k)
            cout<<"Win\n";
        else
            cout<<"Lose\n";
    }   
    return 0;
}

