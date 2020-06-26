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
    int n ;
    cin>>n;
    vector<ll> a(n,0);
    loop(0,n)
        cin>>a[i];
    sort(a.begin(),a.end());
    ll maxrev = INT_MIN;
    loop(0,n)
        maxrev = max(maxrev, (a[i] * (n - i)));
    cout<<maxrev<<newline
    return 0;
}