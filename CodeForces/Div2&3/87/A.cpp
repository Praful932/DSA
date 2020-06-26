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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        long double result;
        if(a<=b)
            cout<<b<<newline
        else
        {
            if(d>=c)
                result =-1;
            else
            {
                ll sleepremaining = a - b;
                ll iwillsleep = c - d;

                result= ceil(double(sleepremaining)/double(iwillsleep));
                result = (result*c) + b;
            }
            cout<<fixed<<setprecision(0);
            cout<<result<<newline
        }
    }
    return 0;
}