#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    LeetCode 66
    Input : [6,6]
    Output : [6,7]
    Input :  [9,9,9,9,9,9,9,9,9,9]
    Output : [1,0,0,0,0,0,0,0,0,0]
*/
vector<int> solve(vector<int> &a)
{
    int n = a.size();
    for(int i=n-1;i>=0;i--)
    {
        if(a[i] == 9)
            a[i] = 0;
        else
        {
            a[i]++;
            return a;
        }
    }
    // if reached here means number is 999..
    a.push_back(0);
    a[0] = 1;
    return a;
}
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
        solve(a);
        loop(0,a.size())
            cout<<a[i]<<" ";
        cout<<newline
    }
    return 0;
}