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
    int n, x;
    cin >> n;
    vector<ll> a(n, 0);
    loop(0, n)
        cin >>a[i];
    sort(a.begin(), a.end());
    ll sum = 0;
    ll notdisap = 1;
    loop(0, n-1)
    {
        sum += a[i];
        while(a[i+1]<sum && i<n-1)
            i++;
        if(i<n-1 && a[i+1]>=sum)
            notdisap++;
    }
    cout << notdisap << newline return 0;
}