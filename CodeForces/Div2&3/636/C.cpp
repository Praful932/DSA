#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;

bool pos(ll n)
{
    if(n>0)
        return true;
    return false;
}
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n, 0);
        loop(0,n)
            cin>>a[i];
        ll posmax = LONG_LONG_MIN;
        ll negmax = LONG_LONG_MIN;
        ll sum = 0;
        loop(0,n)
        {
            if(pos(a[i]))
            {
                posmax = max(posmax,a[i]);
                if(negmax!=LONG_LONG_MIN)
                    sum += negmax;
                negmax = LONG_LONG_MIN;
            }
            else
            {
                negmax = max(negmax,a[i]);
                if(posmax!=LONG_LONG_MIN)
                    sum += posmax;
                posmax = LONG_LONG_MIN;
            }
        }

        if(posmax!=LONG_LONG_MIN)
            sum += posmax;
        else
            sum += negmax;
        cout<<sum<<newline
    }
    return 0;
}