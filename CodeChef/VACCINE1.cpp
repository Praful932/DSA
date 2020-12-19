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
    int d1, v1, d2, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    int produced = 0;
    int day = 1;
    while(produced < p)
    {
        if(d1 <= day)
            produced += v1;
        if(d2 <= day)
            produced += v2;
        day++;
    }
    cout<<day - 1<<nl
    return 0;
}

