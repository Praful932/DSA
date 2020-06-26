#include <bits/stdc++.h>
#define newline cout<<"\n";
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin>>m>>n;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                    cout<<"W";
                else
                    cout<<"B";
            }
            newline
        }
        
    }
    return 0;
}