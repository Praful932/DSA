// 10 4
// 4 3 4 3 2 3 2 1 0 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, max_peak = 0;
        cin >> n >> k;
        vector<int> a(n, 0);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0;

        for (int i = 1; i < k - 1; i++)
            if (a[i] - a[i - 1] > 0 && a[i] - a[i + 1] > 0)
                max_peak++;
        // cout<<max_peak<<endl;
        int last_peak = max_peak;
        // cout<<last_peak<<endl;
        for (int i = k; i < n; i++)
        {
            int p = last_peak;

            if (a[i - k + 1] > a[i - k] && a[i - k + 1] > a[i - k + 2])
                p--;

            if (a[i - 1] > a[i] && a[i - 1] > a[i - 2])
                p++;
            // cout<<p<<endl;
            if (p > max_peak)
            {
                max_peak = p;
                l = i - k + 1;
            }
            last_peak = p;
        }
        cout << max_peak + 1 << " " << l + 1 << "\n";
    }

    return 0;
}