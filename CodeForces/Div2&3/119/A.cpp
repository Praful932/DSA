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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int zc,z;
    int ans=0;
    for (int x = 0; x <= 4000; x++)
    {
        for (int y = 0; y <= 4000; y++)
        {
            zc = (n - x * a - y * b);
            if(zc<0)
                break;
            double z = double(zc)/c;
            if(z==int(z))
                ans = max(ans,int(x+y+z));
        }
    }
    cout<<ans<<newline
    return 0;
}