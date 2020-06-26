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
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        int loss = 0;
        loop(0,n)
        {
            cin>>a[i];
            if(a[i]>k)
                loss += a[i] - k;
        }
        cout<<loss<<newline
        
    }
    return 0;
}