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
    // fix points'y as height since base is x, then find left and right limit of x
    OJ;
    // 10^9 max int
    int n;
    cin >> n;
    // x, y
    vector<pair<int,int>> points;
    int xmax = 1e5;
    int ymax = 500;
    int a,b;

    while (n--)
    {
        cin >> a >> b;
        points.push_back({a,b});
    }
    // interested in y min when calculating left & right limits
    points.push_back({0,0});
    points.push_back({xmax, 0});

    // push max upper bounds hists, not interested in (0,500)
    for(int i=1;i<xmax;i++)
        points.push_back({i, 500});
    
    // ith index contains left and right x limit of points[i].second
    vector<int> L(3*xmax,-1);
    vector<int> R(3*xmax,-1);

    sort(points.begin(), points.end());

    // to find left and right limit
    stack<int> s1,s2;
    
    // find xlimit to points right
    for(int i=0;i<points.size();i++)
    {
        a = points[i].first;
        b = points[i].second;
        while(!s1.empty() && (b < points[s1.top()].second))
        {
            R[s1.top()] = a;
            s1.pop();
        }   
        s1.push(i);
    }
    
    // find xlimit to points left
    for(int i=points.size() - 1;i>=0;i--)
    {
        a = points[i].first;
        b = points[i].second;
        while(!s2.empty() && (b < points[s2.top()].second))
        {
            L[s2.top()] = a;
            s2.pop();   
        }   
        s2.push(i);
    }
    int ans = INT_MIN;
    for(int i=0;i<points.size();i++)
    {
        a = points[i].first;
        b = points[i].second;
        // for maxlimit points, eg (0,500)
        if(L[i] == -1 or R[i] == -1)
            continue;
        // imagine three points having same x, there would be no rectangle and i is middle point
        if(L[i] == a or R[i] == a)
            continue;
        ans = max(ans, (R[i] - L[i]) * b);
    }
    cout<<ans<<newline
    return 0;
}