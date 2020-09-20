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
    ll n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    loop(0,n)
        cin>>a[i];
    // index, val
    stack<pair<ll,ll>> s;
    ll ans = 1;
    s.push({1, a[0]});
    loop(1,n)
    {
        while(!s.empty() && (a[i] < s.top().second))
        {
            ll index1 = s.top().first;
            ans *= ((i + 1) - index1 + 1);
            ans = ans % 1000000007;
            s.pop();
        }            
        s.push({i+1, a[i]});
    }
    cout<<ans<<newline
    return 0;
}