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
    ios::sync_with_stdio(false);
    cin.tie(0);
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        loop(0,n)
            cin>>a[i];
        int count = 1;
        int minspeed = a[0];
        loop(1,n)
        {
            minspeed = min(a[i],minspeed);
            if(a[i]<=minspeed)
                count++;
        }
        cout<<count<<newline
    }
    return 0;
}