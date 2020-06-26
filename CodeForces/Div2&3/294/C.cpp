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
    int n, m;
    cin >> n >> m;
    int teams = 0;
    /*
        n - experienced participants
        m - newbies
    */
    if (n > 1 || m > 1)
    {
        while (n && m)
        {
            if (n > m)
            {
                n -= 2;
                m--;
                if (m < 0 || n < 0)
                    break;
                else
                    teams++;
            }
            else
            {
                n--;
                m -= 2;
                if (m < 0 || n < 0)
                    break;
                else
                    teams++;
            }
        }
    }
    cout << teams;
    return 0;
}