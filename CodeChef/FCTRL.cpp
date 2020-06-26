#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
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
        ll n;
        cin >> n;
        // closest multiple of 5
        ll count =1;
        if(n<=4)
            cout<<0<<newline
        else if(n<=9)
            cout<<1<<newline
        else
        {
            while(n>1)
            {
                count *= n;
                n--;
                cout<<n<<newline;
            }
            cout<<count<<newline
        }
    }
    return 0;
}