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
#define N 10003

map<int, vector<int>> factors;
vector<bool> isprime(N, true);

void find_factors()
{
    isprime[1] = false;
    for(int i=2;i<=N;i++)
    {
        if(isprime[i])
        {
            factors[i].push_back(i);
            for(int j = i + i;j<=N;j += i)
            {
                isprime[j] = false;
                factors[j].push_back(i);
            }
        }
    }
}

int main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    find_factors();
    int lastnumber;
    int balls;
    while (t--)
    {
        balls = 0;
        int n;
        cin >> n;
        vector<int> a(n, 0);
        loop(0, n)
            cin >> a[i];

        if(a[0] == 1)
            a[0] += 1, balls += 1;

        lastnumber = a[0];
        // make the sequence non decreasing
        loop(1, n)
        {   
            if(a[i] < lastnumber)
            {
                balls += abs(lastnumber - a[i]);
                a[i] = lastnumber;
            }
            lastnumber = a[i];
        }   

        // prime factor, freq
        map<int, int> freq;
        loop(0, n)
        {
            int pfsz = factors[a[i]].size();
            for(int j=0;j<pfsz;j++)
                freq[factors[a[i]][j]]++;
        }

        // to make every no. even is always the most minimal option
        freq[2] = 1;


        int minballs = INT_MAX;
        
        // other options are the numbers prime factors
        for(auto i:freq)
        {
            int extraballs = 0;
            int number = i.first;
            for(int j=0;j<n;j++)
            {
                int reqd = ceil(1.0*a[j]/number);
                extraballs += abs(reqd*number - a[j]);
                // cout<<number<<" "<<a[j]<<" "<<reqd<<" "<<abs(reqd*number - a[j])<<nl
            }
            minballs = min(extraballs, minballs);
        }

        balls += minballs;
        cout<<balls<<nl
    }
    return 0;
}

