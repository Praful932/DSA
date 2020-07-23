#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    Every y coordinate will occur two times except for missing one
    xor to find y
    and one x will map to odd y
*/
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total_points = 4*n -1;
        map<ll,set<ll>> points;
        ll fx,fy;
        ll x,y;
        cin>>x>>y;
        points[x].insert(y);
        fy = y;
        loop(1,total_points)
        {
            cin>>x>>y;
            fy ^= y;
            points[x].insert(y);
        }
        for(auto i:points)
        {
            if(i.second.size() & 1)
            {
                fx = i.first;
                break;
            }
        }
        cout<<fx<<" "<<fy<<newline
    }
    return 0;
}