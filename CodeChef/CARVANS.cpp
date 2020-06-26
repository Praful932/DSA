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
        int n;
        cin >> n;
        vector<int> a(n, 0);
        loop(0,n)
            cin>>a[i];
        int count = 0;
        loop(0,n-1)
        {
            if(a[i]>=a[i+1])
                count++;
        }
        cout<<count+1<<newline
    }
    return 0;
}