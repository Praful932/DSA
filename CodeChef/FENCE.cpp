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
    int t;
    cin >> t;
    /*
        Sparse matrix, for every cell added check if there are adjacent neighbors,
        if all 4 are neighbors, then the cell has no boundary, likewise.
    */
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int r, c;
        map<int, set<int>> sparse;
        vector<pair<int,int>> a;
        loop(0,k)
        {
            cin >> r >> c;
            sparse[r].insert(c);
            a.push_back({r,c});
        }
        int total = 0;
        loop(0,k)
        {
            total += 4;
            int tominus = 0;
            r = a[i].first;
            c = a[i].second;
            if(r - 1 > 0)
                if((!sparse[r - 1].empty()) and (sparse[r - 1].find(c) != sparse[r - 1].end()))
                    tominus++;
            if(r + 1 <= n)
                if((!sparse[r + 1].empty())  and (sparse[r + 1].find(c) != sparse[r + 1].end()))
                    tominus++;
            if(c + 1 <= m)
                if((!sparse[r].empty())  and (sparse[r].find(c + 1) != sparse[r].end()))
                    tominus++;
            if(c - 1 > 0)
                if((!sparse[r].empty()) and (sparse[r].find(c - 1) != sparse[r].end()))
                    tominus++;
            total -= tominus;
        }
        cout<<total<<newline
    }
    return 0;
}