#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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
const int N = 1e5 + 2;
// consider all are prime
vector<bool> is_prime(N, true);
// distinict no of prime factors count
map<int, int> prime_factor_nos;

// kind of table dp approach
// first row i by 1 will be all zeros, since 1 has zero prime factors(1->5)
// table of 5 by N ( 2nd row denoting, numbers having 2 prime factors encountered uptil column i(ith number)
int table[6][N] = {0};

void sieve()
{
    is_prime[0] = false;
    prime_factor_nos[0] = 0;
    is_prime[1] = false;
    prime_factor_nos[1] = 0;
    loop(2, N)
    {
        if(!is_prime[i])
            continue;
        prime_factor_nos[i] = 1;
        for(int j= i + i;j<N;j += i)
        {
            is_prime[j] = false;
            prime_factor_nos[j]++;
        }
    }

    // loop(2,101)
    //     cout<<prime_factor_nos[i]<<nl;
}

int main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    sieve();
    int a, b, count, k;
    loop(2, N)
    {
        for(int j=1;j<=5;j++)
        {
            // copy previous column
            table[j][i] = table[j][i - 1];
        }
        // cout<<"i :"<<i<<" pf[i] "<<prime_factor_nos[i]<<" "<<table[prime_factor_nos[i]][i]<<nl

        // increment that one factor for the current number
        int f = prime_factor_nos[i];

        if(f<=5)
            table[f][i]++;

    }
    
    while (t--)
    {
        cin >> a >> b >> k;
        cout<<table[k][b] - table[k][a - 1]<<nl 
    }   
    return 0;
}

