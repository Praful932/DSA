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
        int n, d;
        cin >> n >> d;
        vector<int> a(n, 0);
        int valid = 0, invalid = 0;
        int days = 0;
        loop(0,n)
        {
            cin >> a[i];
            if(a[i] >= 80 or a[i]<=9)
                invalid++;
            else
                valid++;
        }      
        days = ceil(valid * 1.0/d) + ceil(invalid * 1.0/d);
        cout<<days<<nl
    }
    return 0;
}

