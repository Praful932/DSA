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
    /*
        G.P till log n
    */
    OJ;
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        int n = log(x)/log(5);
        ll factorcount = 0;
        for(int i=1;i<=n;i++)
            factorcount += floor(x/pow(5,i));
        cout<<factorcount<<newline
    }
    return 0;
}