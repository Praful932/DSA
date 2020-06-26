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
    int sum1=0,sum2=0,sum3=0;
    while (t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    if(!sum1 && !sum2 && !sum3)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}