#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
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
        int x, y;
        cin >> x >> y;
        // now just count set bits
        int n = x ^ y;
        int count = 0;
        // Brian Kernighan's algo
        // n & n-1 sets rightmost set bit off in n
        while(n)
        {
            n = n & n-1;
            count++;
        }
        cout<<count<<newline
    }
    return 0;
}