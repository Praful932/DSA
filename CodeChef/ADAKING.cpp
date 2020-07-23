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
        int k;
        cin>>k;
        vector<vector<char>> a(8,vector<char> (8,'X'));
        a[0][0] = 'O';
        if(k>1)
        {
            int dupk = k - 1,i=0,j=1;
            while(dupk--)
            {
                a[i][j] = '.';
                j++;
                if(j==8)
                {
                    i++;
                    j=0;
                }
            }
        }
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
                cout<<a[i][j];
            cout<<newline
        }
    }
    return 0;
}