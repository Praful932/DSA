#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    Bellman Ford Algorithm - Check if any negative cycles present
    modifiction of Djikstra's algorithm.
    Works on the principle that relaxing edges 1st times gets you shortest distance of
    from source to target containing one edge and so on till N - 1 edges.
    If relaxing one more time improves the shortest distance means there is a negative
    weight cycle
*/
struct Edge
{
    int src,dest,weight;
};
struct Graph
{
    int V,E;
    struct Edge* edge;
};
Graph* create(int V,int E)
{
    Graph *G = new Graph;
    G->V = V;
    G->E = E;
    G->edge = new Edge[E];
    return G;
};
void bellmanford(Graph* G)
{
    int V = G->V;
    int E = G->E;
    vector<int> dist(V,INT_MAX);
    dist[0] = 0;
    // Relax every edge V-1 times
    for(int i=0;i<V-1;i++)
    {
        // iterate over all edges
        for(int j=0;j<E;j++)
        {
            int u = G->edge[j].src;
            int v = G->edge[j].dest;
            int w = G->edge[j].weight;
            if(dist[u]!=INT_MAX && w + dist[u]<dist[v])
                dist[v] = w + dist[u];
        }
    }

    // iterate over all edges once more
    for(int j=0;j<E;j++)
    {
        int u = G->edge[j].src;
        int v = G->edge[j].dest;
        int w = G->edge[j].weight;
        if(dist[u]!=INT_MAX && w + dist[u]<dist[v])
        {
            cout<<"Negative Cycle Present"<<newline
            return;
        }    
    }
    cout<<"No Negative Cycles!"<<newline
}
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        Graph* G = create(v,e);
        loop(0,e)
        {
            int u,v,w;
            cin>>u>>v>>w;
            G->edge[i].src = u;    
            G->edge[i].dest = v;
            G->edge[i].weight = w;
        }
        bellmanford(G);
    }
    return 0;
}