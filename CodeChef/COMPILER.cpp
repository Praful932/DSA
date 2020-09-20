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
    /*
        Keep track of count of opening and closing
    */
    int t;
    cin >> t;
    while (t--)
    {
        string exp;
        cin >> exp;
        int n = exp.length();
        int ans = 0;
        vector<char> a(n,'0');
        int count = 0;
        // cout<<n<<newline
        loop(0,n)
            a[i] = exp[i];
        if(a[0] == '>' || n == 1)
            ans = 0;
        else
        {
            loop(0,n)
            {
                if(a[i] == '<')
                    count++;
                else
                {
                    // valid length will always end with '>'
                    // if > exceeds < any point of time break
                    count--;
                    if(count == 0)
                        ans = i+1;
                    if(count < 0)
                        break;
                }
            }
        }
        cout<<ans<<newline
    }
    return 0;
}