#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(ll i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
int main()
{
    OJ;
    ll t;
    cin >> t;
    while (t--)
    {
        ll p,sum=0;
        vector<ll> a(5, 0);
        loop(0,5)
            cin>>a[i];
        cin>>p;
        loop(0,5)
            sum += p * a[i];
        ll totaltime = 24 * 5;
        if(totaltime>=sum)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}