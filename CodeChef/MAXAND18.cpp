#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
bool cmp(pair<ll,ll> &a,pair<ll,ll> &b)
{
    if(a.first > b.first)
        return true;
    else if(a.first < b.first)
        return false;
    else 
        if(a.second > b.second)
            return false;
    return true;
}
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n, 0);
        vector<pair<ll,ll>> bits(31);
        loop(0,n)
            cin>>a[i];
        for(int i=0;i<=30;i++)
        {
            // set ith bit
            ll no = pow(2,i);
            ll contr=0;
            for(int j=0;j<n;j++)
            {
                // contribution of each number
                if(a[j] & no)
                    contr += a[j] & no;
            }
            bits[i].first = contr;
            bits[i].second = i;
        }
        sort(bits.begin(),bits.end(),cmp);

        ll res=0;
        for(int i=0;i<k;i++)
            res += pow(2,bits[i].second);
        cout<<res<<newline
    }
    return 0;
}