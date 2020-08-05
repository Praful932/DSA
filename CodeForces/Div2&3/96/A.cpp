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
    string s;
    cin>>s;
    int n = s.length();
    int flag = 0;
    for(char c:s)
    {
        if(c=='H' || c=='Q' || c=='9' || c=='+')
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}