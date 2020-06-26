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
        int n;
        cin >> n;
        vector<int> a(n, 0);
        loop(0, n)
                cin >>
            a[i];

        int e = 0, o = 0;
        loop(0, n)
        {
            if (a[i] % 2)
                o++;
            else
                e++;
        }

        if (e % 2 == 0 && o % 2 == 0)
            cout << "YES\n";
        else
        {
            int flag = 0;
            for (int i = 0; i < a.size(); i++)
            {   // even
                if (a[i] % 2 == 0)
                {
                    for (int j = 0; j < a.size(); j++)
                    {
                        // odd
                        if(a[j]%2 && (abs(a[i]-a[j])==1))
                        {
                            cout<<"YES\n";
                            flag = 1;
                            break;
                        }
                    }
                    if(flag)
                        break;
                }
            }
            if(!flag)
                cout<<"NO\n";
        }
    }
    return 0;
}