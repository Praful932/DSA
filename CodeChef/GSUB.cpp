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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        // index starts from 1
        vector<int> a(n + 1, 0);
        loop(1,n + 1)
            cin >> a[i];
        
        int maxsubseq = 1;
        int c = 1;

        loop(2,n + 1)
        {
            if(a[i - 1]!=a[i])
                c++;
        }
        maxsubseq = c;

        int index,number; 
        loop(0, q)
        {
            cin >> index >> number;
            if(a[index] != number)
            {
                int pc=0;
                int nc=0;
                // initial contribution
                if(index > 1 && a[index - 1]!=a[index])
                    pc++;
                if(index < n && a[index] != a[index + 1])
                    pc++;

                a[index] = number;

                // contribution now
                if(index > 1 && a[index - 1]!=a[index])
                    nc++;
                if(index < n && a[index] != a[index + 1])
                    nc++;
                
                maxsubseq = maxsubseq - pc + nc;
            }
            cout<<maxsubseq<<nl
        }
        }
    return 0;
}

