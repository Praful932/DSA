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
        map<int, int> freq;
        loop(0, n)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        int count = 0;
        int unused = 0;
        int max_unused = INT_MIN;
        for (int i = 1; i <=freq.size(); i++)
        {
            count += floor(1.0 * freq[i] / i);
            unused += freq[i] % i;
            max_unused = max(max_unused,i);
            if(unused>=max_unused)
            {
                count++;
                unused = unused - max_unused;
            }            
        }
        cout<<count<<newline
    }
    return 0;
}