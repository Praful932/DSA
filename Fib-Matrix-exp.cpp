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

void matmul(int a[2][2], int b[2][2])
{
    // matmuls and stores in a
    int ans[2][2];

    loop(0, 2)    
    {
        for(int j = 0; j<2;j++)
        {
            ans[i][j] = 0;
            for(int k=0;k<2;k++)
                ans[i][j] += a[i][k] * b[k][j];
        }
    }

    loop(0,2)
    {
        for(int j = 0;j<2;j++)
            a[i][j] = ans[i][j];        
    }
}

int power(int F[2][2], int n)
{
    // for odd cases
    int M[2][2] = {{1,1}, {1,0}};

    // only useful when directly n is 1 F(2), not useful when recursive
    // return 1;
    if(n == 1)
        return 1;
    
    // half the power
    power(F, n/2);

    // stores F^2 back in F
    matmul(F, F);

    // if n is odd
    if(n & 1)
        matmul(F, M);

    // this is F(n)
    return F[0][0];
}

int nthFib(int n)
{
    // nth fib = f(n - 1) + f(n - 2)
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    
    int F[2][2] = {{1,1}, {1,0}};

    return power(F, n - 1);
}

signed main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = nthFib(n);
        cout<<ans<<nl
    }
    return 0;
}

