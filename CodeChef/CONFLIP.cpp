#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int g;
        cin >> g;
        while(g--)
        {
            /*
                i - initial state i = 1 or 2 
                1 - head
                similarly for q(final state)
                n - total rounds and coins
            */
            ll i,n,q;
            cin >> i >> n >> q;
            
            // if n is odd
            if(n & 1)
            {
                ll initial =  n - 1;
                ll final = initial/2;
                if(i==q)
                    cout<<final<<newline
                else
                    cout<<n - final<<newline
            }
            else
                cout<<n/2<<newline
        }
    }
    return 0;
}