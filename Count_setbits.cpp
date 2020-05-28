/*
Count and display set bits till 0 to n in O(n)
*/
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
    int n;
    cin>>n;
    vector<int> nos(n+1,0);
    // 0 has 0 set bit 
    // 1 has 1 set bit - a[1/2] + 1 % 2;
    cout<<nos[0]<<newline
    loop(1,n)
    {
        nos[i] = nos[i/2] + i % 2;
        cout<<nos[i]<<newline
    }    
    return 0;
}