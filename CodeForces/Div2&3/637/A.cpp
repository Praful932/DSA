#include <bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
    if(a>b)
        return b;
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int eachmin = abs(a - b);
        int eachmax = a + b;
        float totalmin = abs(c - d);
        float totalmax = c + d;
        int total1 = n * eachmin;
        int total2 = n * eachmax;
        if(total1 >= totalmin && total1 <= totalmax)
            cout<<"Yes\n";
        else if(total2 >= totalmin && total2 <= totalmax)
            cout<<"Yes\n";
        else if(floor(totalmin/n) >= eachmin && ceil(totalmin/n) <= eachmax)
        {
            cout<<"Yes\n";
        }
        else if(floor(totalmax/n) >= eachmin && ceil(totalmax/n) <= eachmax)
        {
            cout<<"Yes\n";
        }
        else
            cout<<"No\n";
    }
    return 0;
}