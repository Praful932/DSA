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
    int t1 = t;
    while (t--)
    {
        string a1 = "KICK";
        string a2 = "START";
        string s;
        cin >> s;
        int n=s.length();
        vector<char> a(n,'0');
        loop(0,n)
            a[i] = s[i];
        int start = 0, end = 0;
        loop(0,n)
        {
            if(s.substr(i, a1.length()) == a1)
                start++;
            if(s.substr(i, a2.length()) == a2)
                end += start;
        }
        cout<<"Case #"<<t1-t<<": "<<end<<nl
    }
    return 0;
}

