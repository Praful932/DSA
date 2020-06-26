// Div 3
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a>> b;
        if(a%b==0)
            cout<<0<<"\n";
        else
            cout<<abs((a%b)-b)<<"\n";
        
    }
    return 0;
}