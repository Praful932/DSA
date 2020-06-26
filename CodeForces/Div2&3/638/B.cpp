#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            a.insert(ele);
        }
        int setsize = a.size();
        vector<int> v;
        v.assign(a.begin(), a.end());
        if (setsize>k)
            cout << -1 << "\n";
        else
        {
            cout << k * n << "\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < k; j++)
                {
                    int index = j % setsize;
                    cout << v[index] << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}