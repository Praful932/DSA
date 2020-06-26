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
    int a, b, count = 0;
    cin >> a >> b;
    if(a==1 && b==1)
        cout<<0<<newline
    else
    {
        while (a > 0 && b > 0)
        {
            if (a < b)
            {
                a += 1;
                b -= 2;
            }
            else
            {
                b += 1;
                a -= 2;
            }
            count++;
        }
        cout<<count<<newline
    }
    return 0;
}