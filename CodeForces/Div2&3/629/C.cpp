#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
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
        int l;
        string s, s1, s2;
        cin >> l >> s;
        if (s == "2")
        {
            cout << 1 << "\n"
                 << 1 << newline
        }
        else
        {
            int flag = 0;
            s1.push_back('1');
            s2.push_back('1');
            int one_encountered = 0;
            loop(1, l)
            {
                if (s[i] == '2' && one_encountered == 0)
                {
                    s1.push_back('1');
                    s2.push_back('1');
                }
                else if (s[i] == '1' && one_encountered == 0)
                {
                    s1.push_back('1');
                    s2.push_back('0');
                    one_encountered = 1;
                }
                else if (s[i] == '1' && one_encountered == 1)
                {
                    s1.push_back('0');
                    s2.push_back('1');
                }
                else if (s[i] == '2' && one_encountered == 1)
                {
                    s1.push_back('0');
                    s2.push_back('2');
                }
                else
                {
                    s1.push_back('0');
                    s2.push_back('0');
                }
            }
            cout << s1 << newline 
            cout << s2 << newline
        }
    }
    return 0;
}