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

void stov(vector<int> &a, string s)
{
    // converts string to vector of ints
    int n = s.size();
    loop(0, n)
        a[i] = s[i] - '0';
}

int main()
{
    OJ;
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> a(n, 0);
        stov(a, s);

        int ans = 0;

        /*
            length of valid beautiful string for 
            i = 1 -> 1 + 1 = 2
            i = 2 -> 2 + 4 = 6
            i = 3 -> 3 + 9 = 12
                     x + (x)^2 has to be <= N
            x ~= root(n)
            for each i iterate and then slide windows
            Nroot(N) 

            Sol ref : https://www.codechef.com/viewsolution/25406557
        */
        int ones, zeros, range, expectedzeros;
        for (int i = 1; (i * i + i) <= n; i++)
        {
            // for strings containing i 1s
            expectedzeros = i*i;
            ones = 0, zeros = 0, range = i + expectedzeros;

            // loop through first window of length - range
            loop(0, range)
            {
                if(a[i])
                    ones++;
                else
                    zeros++;
            }
            if(zeros == expectedzeros)
                ans++;

            for(int j=range;j<n;j++)
            {
                if(a[j - range])
                    ones--;
                else
                    zeros--;
                
                if(a[j])
                    ones++;
                else
                    zeros++;
                
                if(zeros == expectedzeros)
                    ans++;
            }
        }
        cout<<ans<<nl
    }
    return 0;
}
