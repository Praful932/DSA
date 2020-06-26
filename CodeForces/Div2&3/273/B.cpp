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
    /*
        n - total participants
        m - total teams
    */
    ll n, m;
    ll kmin, kmax;
    cin >> n >> m;
    if (m == n)
    {
        kmin = 0;
        kmax = 0;
    }
    else if (m == 1)
    {
        kmin = kmax = (n * (n - 1)) / 2;
    }
    else
    {
        kmax = n - m + 1;
        kmax = (kmax * (kmax - 1)) / 2;
        ll full = n % m;
        if (!full)
        {
            kmin = n / m;
            kmin = m * ((kmin * (kmin - 1)) / 2);
        }
        else
        {
            ll fullp = ceil((double)n / m);
            kmin = full * (fullp * (fullp - 1)) / 2;
            kmin += (m - full) * ((fullp - 1) * (fullp - 2)) / 2;
        }
    }
    cout << kmin << " " << kmax << newline return 0;
}