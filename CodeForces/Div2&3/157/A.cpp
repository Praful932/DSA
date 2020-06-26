// Div 1
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
    vector<int> number(n,0);
    int flag = 0;
    loop(0,n)
    {
        number[i] = s[i] - '0';
        if(number[i]%2==0)
            flag = 1;
    }
    if(flag==0)
    {
        // no 0s
        loop(0,n-1)
            cout<<number[i];
    }
    else
    {
        flag = 0;
        loop(0,n)
        {
            if(number[i]==0 && !flag)
            {    
                flag = 1;
                continue;
            }
            cout<<number[i];
        }
    }
    return 0;
}