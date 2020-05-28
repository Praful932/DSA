/*
Given n nodes with edges - Check if Bipartite Possible
Intution - Check if Graph has odd cycle if yes not Possible
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
    int n,e;
    cout<<"Enter No of Nodes:\n";
    cin >> n;
    cout<<"Enter No of edges:\n";
    cin>>e;
    vector<vector<int>> adj(n+1);
    cout<<"Enter edges:\n";
    while(e--)
    {
        for(int i=1;i<=e;i++)
        {
            int a;
            int b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    }
    
    return 0;
}