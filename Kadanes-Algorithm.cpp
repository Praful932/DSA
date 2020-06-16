#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;
/*
    Kadanes Algorithm - Used for finding maximum sum subarray
    Intuition - Max sum subarray at ith index is either just the ith element
    or ith element + max sum at i-1 index
*/
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n, 0);
        loop(0, n)
            cin >>a[i];
        ll globalmax = INT_MIN;
        ll localmax = INT_MIN;
        loop(0, n)
        {
            // localmax is maximum sum subarray including ith index
            localmax = max(a[i], a[i] + localmax);
            globalmax = max(localmax,globalmax);
        }
        cout<<"Maximum sum Subarray:"<<globalmax<<newline
    }
    return 0;
}