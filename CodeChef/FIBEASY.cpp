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

signed main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    // get repeating last digit seq of fibonnaci
    int first = 0, second = 1;
    int third;
    map<pair<int, int>,int> check;
    check[{first,second}] = 1;
    int last_index;
    vector<int> digit_seq;
    digit_seq.push_back(first);
    digit_seq.push_back(second);
    loop(3, 101)
    {
        third = (first+second) % 10;
        
        if(check[{second, third}] == 1)
        {
            digit_seq.pop_back();
            last_index = i - 2;
            break;
        }
        else
        {
            digit_seq.push_back(third);
            check[{second%10, third}] = 1;
        }
        first = second;
        second = third;
    }
    ll seq_size = digit_seq.size();

    while (t--)
    {
        ll n;
        cin >> n;
        // find corresponding index
        // always use log2l for big logs!!!!
        ll index = pow((ll)2, (ll)log2l(n));
        ll val;
        val = digit_seq[(index % seq_size) - 1];
        cout<<val<<nl
    }
    return 0;
}

