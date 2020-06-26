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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    loop(0, n)
        cin >>a[i];
    sort(a.begin(), a.end());
    int no1 = a[n-1];
    cout<<a[n-1]<<" ";
    
    for(auto it=a.rbegin();it!=a.rend();it++)
    {
        if((no1 % *it != 0) || (count(a.begin(), a.end(), *it) == 2))
        {
            cout<<*it;
            break;
        }
    }

    return 0;
}