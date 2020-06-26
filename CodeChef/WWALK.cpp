#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
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
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        loop(0, n)
            cin >>a[i];
        loop(0, n)
            cin >>b[i];
        ll dist1=0;
        ll dist2=0,dist=0;
        loop(-1, n-1)
        {
            if(dist1==dist2 && a[i+1]==b[i+1])
                dist+=a[i+1];
            dist1+=a[i+1];
            dist2+=b[i+1];
        }
        cout << dist << newline
    }
    return 0;
}