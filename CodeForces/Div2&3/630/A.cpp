#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, d, u;
        int x, y, xl, xr, yu, yd;
        cin >> l >> r >> d >> u;
        cin >> x >> y >> xl >> yd >> xr >> yu;
        int ans = 1;

        // Right steps exceeded available or left steps exceeded
        if (r - l > xr - x || l - r > x - xl)
            ans = 0;

        if (u - d > yu - y || d - u > y - yd)
            ans = 0;
        
        // No space available to move
        if(xl==xr && (l+r)>0)
            ans = 0;
        
        if(yu==yd && (u+d)>0)
            ans=0;

        if(ans)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}