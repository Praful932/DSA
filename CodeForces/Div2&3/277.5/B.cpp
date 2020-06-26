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
    cin>>n;
    vector<int> a(n, 0);
    loop(0, n)
        cin >> a[i];
    cin>>m;
    vector<int> b(m, 0);
    loop(0, m)
        cin >> b[i];
    int count = 0;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    loop(0,n)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
                count++;
                b[j] = INT_MAX;
                // break cus want to consider pair for ith boy anymore since pair found
                break;
            }
        }
    }
    cout<<count<<newline
    return 0;
}