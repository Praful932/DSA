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
#define mod 1000000007
#define N 100002

int fact[N];

int powmod(int a, int n)
{
    // a^n
    // bit masking approach O(log n) o(1) space
    // find power in log n
    if(a == 0 || n == 1)
        return a;
    else if(n == 0)
        return 1;
    
    int ans = 1;
    int lastbit;
    // bits not over
    while(n > 0)
    {
        lastbit = n & 1;

        if(lastbit)
        {
            // if lastbit is 1
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        n = n >> 1;
    }
    return ans;
}

void find_fact()
{  
    fact[0] = 1;
    fact[1] = 1;
    loop(2, N)
        fact[i] = (i * fact[i - 1]) % mod;
}

int ncr(int n, int r)
{
    // ncr in log n
    // ncr = n!/((r)!(n - r)!

    if(n == r)
        return 1;
    
    int numerator = fact[n] % mod;

    int dino_term1 = fact[r] % mod;
    dino_term1 = powmod(dino_term1, mod - 2) % mod;

    int dino_term2 = fact[n - r] % mod;
    dino_term2 = powmod(dino_term2, mod - 2) % mod;

    int ans = (((numerator * dino_term1) % mod) * dino_term2) % mod;
    return ans;
}

signed main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    find_fact();
    while (t--)
    {
        int n;
        cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        vector<int> a(n,0);
        vector<int> b(n,0);

        loop(0, n)
            a[i] = s1[i]  - '0';
        
        loop(0, n)
            b[i] = s2[i] - '0';

        int minones = 0;
        int maxones = 0;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        loop(0, n)
        {
            // if mismatch
            if(a[i] != b[i])
                minones++;
        }

        sort(b.begin(), b.end(), greater<int> ());
        
        loop(0, n)
        {
            // if mismatch
            if(a[i] != b[i])
                maxones++;
        }
        int totalcount = 0;

        for(int i=minones;i<=maxones;i+=2)
            totalcount = (totalcount  + ncr(n, i)) % mod;
        
        cout<<totalcount<<nl
    }
    return 0;
}

