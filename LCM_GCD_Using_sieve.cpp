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

map<int, int> find_factors(int n)
{
    // factors using sieve
    vector<bool> is_prime(n + 1, true); 
    map<int,int> largest_prime_factor;
    // factor, times
    map<int, int> factors;
    
    // consider all are prime numbers intially
    loop(2, n + 1)
    {
        // if the number is not prime
        if(!is_prime[i])
            continue;

        // largest prime factor for a prime number will be itself
        largest_prime_factor[i] = i;

        // if the number is prime, strike off its multiples
        for(int j=i+i;j<=n;j += i)
        {
            // i is a prime factor
            is_prime[j] = false;

            largest_prime_factor[j] = i;
        }
    }
    int p;
    while(n!=1)
    {
        p = largest_prime_factor[n];
        factors[p]++;
        n /= p;
    }

    return factors;
}
int main()
{   
    OJ;
    fastio;
    int a, b;
    cin >> a >> b;
    map<int, int> factor_a = find_factors(a);
    map<int, int> factor_b = find_factors(b);

    int lcm = 1;
    // merge into factor_a
    for(auto i:factor_a)
        factor_a[i.first] = max(factor_a[i.first], factor_b[i.first]);
    
    for(auto i:factor_b)
        factor_a[i.first] = max(factor_a[i.first], factor_b[i.first]);

    for(auto i:factor_a)
        lcm *= pow(i.first, i.second);

    cout<<"LCM : "<<lcm<<nl
    cout<<"GCD : "<<a*b/lcm<<nl

    return 0;
}

