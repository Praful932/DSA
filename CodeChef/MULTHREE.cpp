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
        ll k, d0, d1;
        cin >> k >> d0 >> d1;
        ll S = (d0 + d1);
        ll C = (2 * S) % 10 + (4 * S) % 10 + (6 * S) % 10 + (8 * S) % 10;

        ll num_cycles = (k - 3) / 4;
        ll total = 0;
        cout<<"c :"<<C<<newline
        if (k == 2)
        {
            total = S;
        }
        else
        {
            total = S + (S % 10) + (C * num_cycles);
            int left_over = (k - 3) - (num_cycles * 4);
            int p = 2;
            for (int i = 1; i <= left_over; i++)
            {
                total += (S * p) % 10;
                p = (p * 2) % 10;
            }
        }

        if (total % 3 == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}