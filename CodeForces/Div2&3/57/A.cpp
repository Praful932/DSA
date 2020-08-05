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
    // ez
    OJ;
    string a,b;
    cin>>a>>b;
    int n = a.length();
    string res;
    loop(0,n)
    {
        if(a[i] == b[i])
            res.push_back('0');
        else
            res.push_back('1');
    }
    cout<<res<<newline
    return 0;
}