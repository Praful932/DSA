#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin >> m>> n;
        if(m==1 || n==1)
            cout<<"YES\n";
        else if(m==2 && n==2)
            cout<<"YES\n";
        else
            cout<<"NO\n";        
    }
    return 0;
}