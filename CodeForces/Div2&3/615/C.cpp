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
        ll n;
        cin >> n;
        set<int> factors;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                factors.insert(i);
                n /= i;
                break;
            }
        }

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && !factors.count(i))
            {
                factors.insert(i);
                n /= i;
                break;
            }
        }

        if (factors.size() < 2)
            cout << "NO\n";
        else
        {
            ll lastfactor = n;
            if (n == 1 || factors.count(n))
                cout << "NO\n";
            else
            {
                factors.insert(n);
                cout<<"YES\n";
                for(auto i : factors)
                    cout << i << " ";
                cout<<newline
            }
        }
    }
    return 0;
}