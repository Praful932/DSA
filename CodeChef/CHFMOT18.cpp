#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        ll s, n;
        cin >> s >> n;
        if(s==n || s==1)
            cout<<1<<newline
        else if(s<n)
        {
            if(s%2 == 0)
                cout<<1<<newline
            else
                cout<<2<<newline
        }
        else
        {
            if(s%2 ==0)
            {
                ll total = s/n;
                if(s%n!=0)
                    total++;
                cout<<total<<newline
            }
            else
            {
                ll total = int(s/n);
                ll rem = s - (total *n);
                if(rem==1)
                    rem = 1;
                else if(rem % 2)
                    rem = 2;
                else 
                    rem = 2;
                cout<<total + rem<<newline
            }
        }
    }
    return 0;
}