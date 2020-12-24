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
        int n, k;
        cin >> n;
        vector<int> a(n + 2, 0);
        for(int i=1;i<=n;i++)
            cin >> a[i];
        // circle
        a[0] = a[n];
        a[n + 1] = a[1];


        ll maxscore = 0;
        ll score = 0;

        loop(0,3)
            score += (ll)a[i];
        
        maxscore = max(score, maxscore);
        loop(3, n + 2)
        {
            score += (ll) a[i];
            score -= (ll) a[i - 3];
            maxscore = max(score, maxscore);
        }
        cout<<maxscore<<nl

    }
    return 0;
}

