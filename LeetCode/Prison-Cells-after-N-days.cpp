#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    LeetCode Problem 957
*/
int main()  
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        ll r;
        cin >> r;
        vector<int> a(8, 0);
        loop(0,8)
            cin>>a[i];
        ll dupr = r;
        vector<int> alast(8,0);
        r = r % 14;
        if(!r)
            r=14;
        int c = 0;
        while(r--)
        {
            c++;
            alast = a;
            loop(1,7)
            {
                // cout<<alast[i - 1]<<" "<<alast[i+1]<<newline
                if(alast[i-1]==alast[i+1])
                    a[i] = 1;
                else
                    a[i] = 0;
            }
            if(c==1)
            {
                a[0] = 0;
                a[7] = 0;
            }
            // cout<<"Pass "<<dupr-r<<":"<<newline
            // loop(0,8)
            // cout<<a[i]<<" ";
            // cout<<newline
        }
        loop(0,8)
            cout<<a[i]<<" ";
            cout<<newline
        
    }
    return 0;
}