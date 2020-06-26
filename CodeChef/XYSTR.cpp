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
        string a;
        cin>>a;
        int n = a.size();
        int pairs = 0;
        for(int i=0;i<n-1;)
        {
            if(a[i]!=a[i+1])
            {
                pairs++;
                i+=2;
            }
            else
                i+=1;
        }
        cout<<pairs<<newline
    }
    return 0;
}