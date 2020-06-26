#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // remove duplicates
        set<int> s(a.begin(), a.end());
        a.assign(s.begin(), s.end());
        int v = 1, i = 0;
        sort(a.begin(), a.end());
        if (a[0] > x + 1)
            v = x;
        else
        {
            int n=1;
            for (int i = 0; i < a.size(); )
            {
                if(a[i] == n)
                {
                    n++;
                    i++;
                }
                else if(x!=0)
                {
                    x--;
                    n++;
                }
                else
                {
                    i++;
                }
            }
            v = n - 1;
            // if x is still remaining
            if(x)
                v+=x;
        }
        cout << v << endl;
    }
    return 0;
}