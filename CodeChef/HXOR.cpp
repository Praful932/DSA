#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define nl "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
int main()
{
    OJ;
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        // indexing from 1
        vector<int> a(n, 0);

        loop(0, n)
            cin >>a[i];
        int index1 = 0, index2;
        int bestxor;
        while (x--)
        {
            bestxor = int(pow(2, int(log2(a[index1]))));

            // find best number to xor with
            loop(index1 + 1, n)
            {
                if ((bestxor ^ a[i]) < a[i])
                {
                    index2 = i;
                    break;
                }
                else
                    index2 = n - 1;
            }
            a[index1] ^= bestxor;
            a[index2] ^= bestxor;

            while (a[index1] == 0 and ((index1 + 1) < n))
                index1++;
            // if last pos
            if (index1 == (n - 1))
            {
                if (x == 0)
                    break;
                else if (x & 1 and n == 2)
                {
                    /*
                        One xor can be broken into two operations
                        A B C - Op on A and B
                        is similar to 
                        A B C - Op on A and C & Op on B And C with the same number

                        For seq with length = 2, if there are even ops remaining, no issue.
                        If there are odd operations remaining then, mean we have to do one more
                        op thus this condition. Thus only for n==2, we can't achieve the min seq.

                        For Seq with n!=2, if there are even operations remaining no issue,
                        if there are odd operations remaining, means we have to do one more
                        operation, instead we can break down our last operation into two thus 
                        preserving the sequence.

                    */
                    a[index1 - 1] ^= 1;
                    a[index1] ^= 1;
                    break;
                }
                else 
                    break;
            }
            
        }
        loop(0, n)
            cout<< a[i] << " ";
        cout << nl
    }
    return 0;
}
