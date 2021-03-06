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
        multiset<int> a;
        
        int no;
        loop(0,n)
        {
            cin >> no;
            auto it = a.upper_bound(no);
            if(it == a.end())
            {
                // new disk
                a.insert(no);
            }
            else
            {
                // replace current disk
                a.erase(it);
                a.insert(no);
            }
        }

        cout<<a.size()<<" ";
        for(auto i:a)  
            cout<<i<<" ";
        cout<<nl
    }
    return 0;
}
