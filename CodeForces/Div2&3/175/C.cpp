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
    int n;
    cin>>n;
    vector<ll> a(n,0);
    loop(0,n)
        cin>>a[i];
    sort(a.begin(),a.end());
    ll sum = 0;
    // cout<<a[1]-1+1<<newline
    loop(0,n)
        sum += abs(a[i] - (i + 1));
    cout<<sum;
    return 0;
}