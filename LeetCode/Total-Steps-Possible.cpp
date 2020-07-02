#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    Problem Code : 70
    Given n coins make steps
    5 coins
    *
    * *
    * * 
    2 steps
*/
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<int((0.5) * (sqrt(double(8 * n +1)) - 1))<<newline
    }
    return 0;
}