// Intuition remaining
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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n, 0);
        ll sum = 0;
        int count_no = 0;
        loop(0,n)
            cin>>a[i];
        sort(a.begin(),a.end());
        ll count = 0;
        for(int i=n-1;i>=0;i--)
        {
            sum += a[i];
            if(sum/(1.0 *(n - i)) >= x)
                count++;
            else
                break;
        }
        cout<<count<<newline
    }
    return 0;
}