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
        int m,n;
        cin >> m >> n;
        vector<vector<int>> a(m,vector<int>(n,0));
        set<int> r,c;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j])
                    r.insert(i),c.insert(j);
            }
        }
        // r & c contains invalid rows and columns
        int check = min(m - r.size(), n - c.size());
        if(check & 1)
            cout<<"Ashish\n";
        else
            cout<<"Vivek\n";        
    }
    return 0;
}