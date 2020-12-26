#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define int long long
#define ll long long
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define nl "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fastio \
    ios::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
int powermod(int a, int n, int MOD)
{
    if(n == 1 or a == 0)
        return a;
    else if(n == 0)
        return 1;
    int res = 1;
    int lastbit;
    while(n > 0)
    {
        lastbit = n & 1;
        if(lastbit)
            res = a * res  % MOD;
        a = a * a % MOD;
        n >>= 1;
    }
    return res;
}
signed main()
{   
    OJ;
    fastio;
    int n;
    cin >> n;
    vector <int> prime {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

    vector<int> a(n, 0);
    loop(0,n)
        cin >> a[i];
    
    // length, primes under 100
    // for prefixes keep a empty buffer at the start
    int prefix_factor[n + 1][25];
    memset(prefix_factor,0, sizeof(prefix_factor));
    
    loop(1, n + 1)
    {
        // actual number index
        int digit = a[i - 1];
        for(int j=0;j<25;j++)
        {
            prefix_factor[i][j] += prefix_factor[i - 1][j];
            while(digit % prime[j] == 0)
            {
                prefix_factor[i][j]++;
                digit /= prime[j];
            }
        }
    }

    int t;
    cin >> t;
    while(t--)
    {
        int l,r, MOD;
        cin >> l >> r >> MOD;
        int ans = 1;
        loop(0, 25)
        {
            int power = prefix_factor[r][i] - prefix_factor[l - 1][i];
            int number = prime[i];
            // cout<<number<<" "<<power<<nl
            ans = ans * powermod(number, power, MOD) % MOD;
        }
        cout<<ans<<nl
    }
    
    return 0;
}

