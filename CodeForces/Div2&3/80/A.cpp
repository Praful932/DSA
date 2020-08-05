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
    cin >> n;
    int reqd = n - 10;
    int ans = 0;
    if(reqd>0)
    {
        if(reqd == 1)
            ans = 4;
        else if(reqd <= 9)
            ans = 4;
        else if(reqd == 10)
            ans = 15;
        else if(reqd == 11)
            ans = 4;
    }
    cout<<ans<<newline
    return 0;
}