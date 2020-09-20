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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int maxdepth = INT_MIN;
    int depth = 0, depthpos = 1;
    int ones = 0, twos = 0;
    loop(0,n)
        cin>>a[i];
    loop(0,n)
    {
        if(a[i]==1)
        {
            ones++;
            if(maxdepth < ones)
            {
                maxdepth = ones;
                depthpos = i + 1;
            }
        }
        else
        {
            ones--;
        }
    }

    ones = 0, twos = 0;
    int maxsymbols = INT_MIN, maxsymbolpos = INT_MIN;
    int symbols=0, symbolpos = 0;
    stack<int> s;
    loop(0,n)
    {
        // possible starting pos
        if(a[i]==1 && s.empty())
        {
            s.push(1);
            symbols++;
            symbolpos = i + 1;
        }
        else if(a[i] == 1)
        {
            s.push(1);
            symbols++;
        }
        else
        {
            s.pop();
            // one sequence
            if(s.empty())
            {
                if(symbols > maxsymbols)
                {
                    maxsymbols = symbols;
                    maxsymbolpos = symbolpos;
                }
                symbols = 0;
            }
        }
        // cout<<symbols<<" "<<symbolpos<<newline
    }
        cout<<maxdepth<<" "<<depthpos<<" "<<2 * maxsymbols<<" "<<maxsymbolpos;
    return 0;
}