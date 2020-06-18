#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    https://leetcode.com/problems/surrounded-regions/
    Demonstration of solving this problem by using union find
*/
class UF
{
    // height of set
    int *rank;
    // parent of ith element
    int *id;
    int components;

public:
    UF(int n)
    {
        rank = new int[n];
        id = new int[n];
        components = n;
        loop(0, n)
        {
            rank[i] = 0;
            id[i] = i;
        }
    }
    // find parent of p
    int find(int p)
    {
        int root = p;
        // Find root
        while (root != id[root])
        {
            root = id[root];
        }
        // Path Compression
        while (p != root)
        {
            int next = id[p];
            id[p] = root;
            p = next;
        }
        return root;
    }
    void unionbyrank(int p, int q)
    {
        p = find(p);
        q = find(q);
        if (rank[p] > rank[q])
        {
            // q is small
            id[q] = p;
        }
        else if (rank[q] > rank[p])
        {
            // p is small
            id[p] = q;
        }
        else
        {
            // When both same rank increases by 1
            id[p] = q;
            rank[q]++;
        }
    }
    bool connected(int p, int q)
    {
        // check if p and q belong to same set
        p = find(p);
        q = find(q);
        if (p == q)
            return true;
        return false;
    }
};
int main()
{
    OJ;
    int m, n;
    cin >> m >> n;
    vector<vector<char>> a(m, vector<char>(n, '0'));

    loop(0, m) 
        for (int j = 0; j < n; j++)
        cin >> a[i][j];

    UF uf(m * n + 1);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // if O is at the border
            if (a[i][j] == 'O' && (i == 0 || i == m - 1 || j == 0 || j == n - 1))
            {
                // connect it with our dummy node which is m*n
                uf.unionbyrank(i * n + j, m * n);
            }
            else if (a[i][j] == 'O')
            {
                // for node note on the border
                // a node cannot be filled if it is connected to the boundary
                // directly or indirectly via other nodes(H | V)
                // so create set of each such groups
                if (a[i - 1][j] == 'O')
                    uf.unionbyrank((i - 1) * n + j, i * n + j);
                if (a[i][j - 1] == 'O')
                    uf.unionbyrank(i * n + j - 1, i * n + j);
                if (a[i][j + 1] == 'O')
                    uf.unionbyrank(i * n + j + 1, i * n + j);
                if (a[i + 1][j] == 'O')
                    uf.unionbyrank((i + 1) * n + j, i * n + j);
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // if node is not connected to boundary
            if (!uf.connected(i * n + j, m * n))
                a[i][j] = 'X';
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}