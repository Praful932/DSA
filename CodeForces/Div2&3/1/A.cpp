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
    double x,y,a;
    cin >> x>>y>>a;
    cout<<fixed<<setprecision(0)<<ceil(x/a) * ceil(y/a);
    return 0;
}