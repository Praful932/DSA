#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, m;
        cin >> x >> n >> m;
        while(n)
        {
            if(x<=20)
                break;
            x = floor(x/2) + 10;
            n--;
        }
        if(x<=0)
        {
            cout<<"YES\n";
        }
        else
        {
            x = x - (m * 10);
            // cout<<x<<endl;
            if(x>0)
                cout<<"NO\n";
            else
                cout<<"YES\n";

        }
    }
    return 0;
}