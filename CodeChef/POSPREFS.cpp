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
        cin >> n >> k;
        // indexing from 1
        vector<int> a(n + 1, 0);
        if(k == 1)
        {
            a[1] = 1;
            loop(2, n+1)
                a[i] = -i;
        }
        else if(k == 2)
        {
            a[1] = 1;
            a[2] = 2;
            loop(3, n+1)
                a[i] = -i;
        }
        else if(k == n)
        {
            loop(1, n+1)
                a[i] = i;
        }
        else
        {
            int s = 1;
            a[1] = 1;
            int pos_remaining = k - 1;
            loop(2, n + 1)
            {
                if(pos_remaining == 1)
                {
                    if(((s + i) > (i + 1)) and (i != n))
                    {
                        s -= i;
                        a[i] = -i;
                        if(s > 0)
                            pos_remaining--;
                    }
                    else
                    {
                        s += i;
                        a[i] = i;
                        if(s > 0)
                            pos_remaining--;
                    }
                }
                else if(pos_remaining and ((s - i) > 0))
                {
                    s -= i;
                    a[i] = -i;
                    pos_remaining--;
                }
                else if(pos_remaining)
                {
                    s += i;
                    a[i] = i;
                    pos_remaining--;
                }
                else
                {
                    a[i] = -i;
                }
            }
        }
        loop(1, n + 1)
            cout<<a[i]<<" ";
        cout<<nl
    }
    return 0;
}

