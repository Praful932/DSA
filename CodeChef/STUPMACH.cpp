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
        int n;
        cin >> n;
        vector<ll> a(n, 0);
        ll maxcapacity = LONG_LONG_MAX;
        ll res = 0;
        loop(0,n)
        {
            cin>>a[i];
            maxcapacity = min(a[i],maxcapacity);
            res += maxcapacity;
        }
        cout<<res<<newline
    }   
    return 0;
}