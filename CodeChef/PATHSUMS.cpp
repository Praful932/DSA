#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define nl "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

const int N = 105;
// For Tree
vector<int> adj[N];
// for storing value assigned to node
int val[N];

void dfs(int previous_node, int current_node)
{
    // value assigned to current node
    // 2/1
    val[current_node] = 3 - val[previous_node];
    // dfs on all adjacent nodes except previous node
    for(auto node:adj[current_node])
    {
        if(node != previous_node)
            dfs(current_node, node);
    }
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
        // Total input = n - 1, nodes are from 1 -> n - 1 
        int u, v;
        loop(0, n - 1)
        {
            cin >> u >> v;
            // Tree
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // imaginary node-0 which has its value assigned as 1
        val[0] = 1;
        
        // For 1 previous node would be imaginary node
        dfs(0 , 1);

        // print out value assigned to each total n nodes
        loop(1, n + 1)
            cout<<val[i]<<" ";
        cout<<nl

        // clear out all nodes
        // dummny node + n  nodes
        for(int i=0; i<=n ; i++)
            adj[i].clear();
    }
    return 0;
}

