/*
    Another solution : b c c
*/
#include <bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        vector<int> v(4, 0);
        for(int i=0;i<4;i++)
            cin>>v[i];
        a = v[1];
        c = v[2];
        if(v[0] == v[1])
        {
            b = v[2];
        }
        else
        {
            b = max(a,c);
        }        
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    return 0;
}