#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
vector<vector<int>> adj(100);
vector<bool> visited(100,false);

void bfs(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int node = q.front();
                q.pop();
                visited[node] = true;
                cout<<node<<newline
                for(int j=0;j<adj[node].size();j++)
                {
                    if(!visited[adj[node][j]])
                        q.push(adj[node][j]);
                }
            }
        }
    }
}
int main()
{
    int e,n;
    // cout<<"Enter No of Nodes:\n";
    cin >> n;
    // cout<<"Enter No of edges:\n";
    cin >> e;
    // cout<<"Enter edges:\n";

    for (int i = 1; i <= e; i++)
    {
        int a;
        int b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(n);
    return 0;
}