/*
    Dfs - undirected graph
*/
#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
int n;
vector<bool> visited(100, false);
vector<vector<int>> adj(100);

void dfs(int node)
{
    cout<<node<<newline
    visited[node] = true;
    for(int i=0;i<adj[node].size();i++)    
    {
        // if not explored
        if(!visited[node])
            dfs(adj[node][i]);
    }
}

int main()
{
    int e;
    cout<<"Enter No of Nodes:\n";
    cin >> n;
    cout<<"Enter No of edges:\n";
    cin >> e;
    cout<<"Enter edges:\n";

    for (int i = 1; i <= e; i++)
    {
        int a;
        int b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
        
    // for each component
    for(int i=1;i<=n;i++)
    {
        // if component not explored
        if(!visited[i])
            dfs(i);
    }
    return 0;
}