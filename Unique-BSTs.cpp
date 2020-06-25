#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
int numTrees(int n)
{
    /*
        Catalan number = 1/(n+1) * (2nCn)
    */
    double ans = 1, num = 2 * n;
    for (int i = 1; i <= n; num--, i++)
    {
        ans *= num / i;
    }
    return ans / (n + 1);
}
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "Unique BSTs possible: " << numTrees(n) << newline
    }
    return 0;
}