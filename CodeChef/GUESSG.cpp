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
    ll n;
    cin >> n;

    int chance = 1;
    ll low1 = 0, low2 = 0, high1 = n, high2 = n;
    ll mid1, mid2;
    char check;
    cout << 1<<newline;
    cin >> check;
    if (check == 'E')
        return 0;
    chance++;
    while (1)
    {
        // if chance is odd
        if (chance & 1)
        {
            if (low1 <= high1)
            {
                mid1 = low1 + ((high1 - low1) / 2);
                cout << mid1<<newline;
                cin >> check;
                if (check == 'G')
                    low1 = mid1 + 1;
                else if (check == 'L')
                    high1 = mid1 - 1;
                else
                    break;
            }
            else
            {
                cout << 1<<newline;
                cin >> check;
            }
            chance++;
        }
        else
        {
            if (low2 <= high2)
            {
                mid2 = low2 + ((high2 - low2) / 2);
                cout << mid2<<newline;
                cin >> check;
                if (check == 'G')
                    low2 = mid2 + 1;
                else if (check == 'L')
                    high2 = mid2 - 1;
                else
                    break;
            }
            else
            {
                cout << 1<<newline;
                cin >> check;
            }
            chance++;
        }
    }
    return 0;
}