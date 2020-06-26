#include <bits/stdc++.h>
#define ll long long
#define newline cout<<"\n";
#define loop(from,to) for(int i=from;i<to;i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        // Consider cases when all summands are even or all are odd
        int r1 = n - (k -1);
        int r2 = n - (2 * (k-1));
        if(r1%2==1 && r1>0)
        {
            cout<<"Yes\n";
            loop(0,k-1)
                cout<<"1 ";
            cout<<r1;
            newline
        }
        else if(r2 % 2 == 0 && r2>0)
        {
            cout<<"Yes\n";
            loop(0,k-1)
                cout<<"2 ";
            cout<<r2;
            newline
        }
        else
        {
            cout<<"NO";
            newline
        }
    }
    return 0;
}