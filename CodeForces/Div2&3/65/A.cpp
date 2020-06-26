#include <bits/stdc++.h>
#define ll long long
#define newline <<"\n"
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
    while (t--)
    {
        string a;
        cin>>a;
        if(a.length()>10)
            cout<<a[0]<<a.length() - 2<<a[a.length() - 1] newline;
        else
            cout<<a newline;
    }
    return 0;
}