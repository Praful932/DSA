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

const int N = 202;
vector<bool> is_prime(N + 1, true);
map<int, int> largest_prime_factor;
vector<bool> is_semi_prime(N + 1, false);

void find_largest_prime_factor(int n)
{
    loop(2, n+1)
    {
        if(!is_prime[i])
            continue;

        // if number is prime
        largest_prime_factor[i] = i;

        for(int j = i + i;j<=n;j += i)
        {
            is_prime[j] = false;
            largest_prime_factor[j] = i;
        }
    }
    is_prime[1] = false;
}

void check_semi_prime()
{
    int number, largest_factor;
    int a,b;
    for(auto i:largest_prime_factor)
    {
        
        number = i.first; // 10
        largest_factor = i.second; // 5
        if(is_prime[number])
            continue;
        a = largest_factor;
        number /= largest_factor; // 10/5 = 2
        b = largest_prime_factor[number]; // 2
        number /= largest_prime_factor[number]; // 2/2

        if(number == 1 and a!=b)
            is_semi_prime[i.first] = true;
        else
            is_semi_prime[i.first] = false;
    }
}
int main()
{   
    OJ;
    fastio;
    // get each number's largest prime factors
    find_largest_prime_factor(N);
    // initalize semi prime numbers
    check_semi_prime();

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool check = false;
        if(n > 2)
        {
            int a, b;
            loop(1,n/2 + 2)
            {
                a = i;
                b = n - a;

                if(is_semi_prime[a] and is_semi_prime[b])
                {
                    check = true;
                    break;
                }
            }
        }

        if(check)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

