#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
int getprecedence(char c)
{
    if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '^')
        return 3;
    else
        return -1;
    // for brackets
}
int main()
{
    // infix to postfix
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        stack<char> s;
        n = a.length();
        string ans;
        loop(0,n)     
        {
            if(isalpha(a[i]))
                ans+=a[i];
            else if(a[i] == '(')
                s.push('(');
            else
            {
                // symbol or ')'
                if(a[i] == ')')
                {
                    while(!s.empty() && s.top() != '(')
                    {
                        ans+=s.top();
                        s.pop();
                    }
                    // for (
                    s.pop();
                }
                else
                {
                    int currentprecedence = getprecedence(a[i]);
                    //
                    while(!s.empty() && (getprecedence(s.top()) > currentprecedence))
                    {
                        ans+=s.top();
                        s.pop();
                    }
                    s.push(a[i]);
                }
            }
        }
        while(!s.empty())
        {
            ans+=s.top();
            s.pop();
        }
        cout<<ans<<newline
    }
    return 0;
}