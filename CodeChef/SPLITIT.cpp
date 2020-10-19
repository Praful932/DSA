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

int main()
{   
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        string s;
        cin >> s;
        vector<char> a(n,'0');
        map<char,int> freq;
        loop(0,n)
        {
            a[i] = s[i];
            freq[a[i]]++;
        }
        // Both conditions satisfy only if last letter is present/not
        if(freq[a[n-1]] > 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

