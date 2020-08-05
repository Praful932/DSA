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
    vector<vector<int>> a(5, vector<int>(5,0));
    int ans = 0;
    loop(0,5)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
                ans = abs(2 - i)  + abs(2 - j);
        }
    }
    cout<<ans<<newline
    return 0;
}