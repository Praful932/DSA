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

int main()
{   
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        loop(0,n)
            cin >> a[i];
        sort(a.begin(),a.end(), greater<int>());
        int ans = 0;
        if(n == 1)
        {
            ans = a[0];
        }
        else if(n == 2)
        {
            ans = a[0];
        }
        else if(n == 3)
        {
            if(a[0] == a[n-1])
            {
                ans = a[0] + a[1];
            }
            else
            {
                int x, y;
                int tosub;
                x = a[0], y = a[1];
                tosub = min(x, y);
                ans += tosub;
                x -= tosub, y -= tosub;
                if(!x and y)
                {
                    ans += max(y, a[2]);
                }
                else if(!y and x)
                {
                    ans += max(x, a[2]);
                }
                else
                {
                    // if both became zero
                    ans += a[2];
                }
            }
        }
        else if(n == 4)
        {
            if(a[0] == a[n - 1])
            {
                ans = 2 * a[0];
            }
            else
            {
                int tosub;
                int x = a[0], y = a[1];
                ans += min(a[0],a[1]);
                x -= ans, y -= ans;
                if(!x and y)
                {
                    x = a[2];
                    tosub = min(x, y);
                    ans += tosub;
                    x -= tosub, y -= tosub;
                    if(!x and y)
                        ans += max(y, a[3]);
                    else if(!y and x)
                        ans += max(x, a[3]);
                    else
                        ans += a[3];
                }
                else if(!y and x)
                {
                    y = a[2];
                    tosub = min(x, y);
                    ans += tosub;
                    x -= tosub, y -= tosub;
                    if(!x and y)
                        ans += max(y, a[3]);
                    else if(!y and x)
                        ans += max(x, a[3]);
                    else
                        ans += a[3];
                }
                else
                {
                    // if both first became zero
                    ans += max(a[2], a[3]);
                }
            }
        }
        cout<<ans<<nl
    }
    return 0;
}

