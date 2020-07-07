#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define loop2(from,to) for(int j=from;j<to;j++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    463 LeetCode
*/
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        /*
            Every block can contibute max 4 if only single island or
            min 0
            so perimeter contributed by single block will be 4 - no(neighbours)
        */
        int m,n;
        cin >> m >> n;
        vector<vector<int>> a(m,vector<int> (n,0));
        loop(0,m)
            loop2(0,n)
                cin >>a[i][j];
        int peri = 0;
        loop(0,m)
        {
            loop2(0,n)
            {
                if(a[i][j]==1)
                {
                    int count = 4;
                    // top
                    if(i>0 && a[i-1][j]==1)
                        count--;
                    // bottom
                    if(i<m-1 && a[i+1][j]==1)
                        count--;
                    // right
                    if(j<n-1 && a[i][j+1]==1)
                        count--;
                    // left
                    if(j>0 && a[i][j-1]==1)
                        count--;
                    peri += count;
                }
            }
        }
        cout<<peri<<newline
    }
    return 0;
}