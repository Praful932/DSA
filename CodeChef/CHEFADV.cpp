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
        int n,m,x,y;
        bool possible = false;
        cin >> n >> m >> x >> y;
        
        if((n - 1)%x==0 and (m - 1)% y == 0)
            possible =true;
        else if(n>=2 and m>=2 and (n - 2)%x==0 and (m - 2)% y == 0)
            possible = true;

        if(possible)
            cout<<"Chefirnemo\n";
        else
            cout<<"Pofik\n";
    }
    return 0;
}

