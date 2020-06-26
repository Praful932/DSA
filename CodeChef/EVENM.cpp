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
        vector<vector<int>> a(n,vector<int> (n,0));
        int number = 1;
        loop(0,n)       
        {
            for(int j=0;j<n;j++)
            {
                a[i][j] = number;
                number++;
            }
            if(1 & i)
                sort(a[i].begin(),a[i].end(),greater<int>());
        }
        loop(0,n)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<newline
        }
    }
    return 0;
}