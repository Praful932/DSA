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
#define fastio \
    ios::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
struct Point
{
    double x, y;
};
double min(double x, double y) 
{ 
    return (x < y)? x : y; 
} 
bool compareX(Point a, Point b)
{
    // Sort according to x coordinate
    if(a.x < b.x)
    {
        return true;
    }
    else if(a.x == b.x)
    {
        if(a.y < b.y)
            return true;
        else
            return false;
    }
    return false;
}
bool compareY(Point a, Point b)
{
    // Sort according to y coordinate
    if(a.y < b.y)
    {
        return true;
    }
    else if(a.y == b.y)
    {
        if(a.x < b.x)
            return true;
        else
            return false;
    }
    return false;
}
double dist(Point P1, Point P2)
{
    // Euclid distance
    return sqrt((P1.x - P2.x) * (P1.x - P2.x) + (P1.y - P2.y) * (P1.y - P2.y));
}
double bruteForce(Point P[], int n)
{
    // If not enough points - return a big number
    if(n < 3)
        return DBL_MAX;
    
    return dist(P[0],P[1]) + dist(P[0],P[2]) + dist(P[1], P[2]);
}
double stripClosest(Point strip[], int size, double mindist)
{
    // Strip is sorted according to y
    loop(0, size)
    {
        for(int j=i+1;j<size && (strip[j].y - strip[i].y) < mindist; j++)
        {
            for(int k=j+1;k<size && (strip[k].y - strip[j].y) < mindist && (strip[k].y - strip[i].y) < mindist;k++)
            {
                double d = dist(strip[i], strip[j]) + dist(strip[j], strip[k]) + dist(strip[i], strip[k]);
                mindist = min(d, mindist);
            }
        }
    }
    return mindist;
}

// This recursive function returns minimum distance
double closestUtil(Point Px[], Point Py[], int n)
{

    // If there are 3 or less points 
    if(n<=3)
        return bruteForce(Px, n);
    
    // If more points find the dividing vertical line
    // Can be found from the sorted Px Array

    int mid = n/2;
    Point midPoint = Px[mid];

    // Divide points into two halves

    // Y sorted points on left of vertical line
    Point Pyl[mid];
    // Y sorted points on right of vertical line
    Point Pyr[n - mid];

    int li = 0, ri = 0;
    loop(0,n)
    {
        if (Py[i].x <= midPoint.x && li<mid) 
            Pyl[li++] = Py[i];
        else
            Pyr[ri++] = Py[i];
    }

    // Recurse both on left and right to find their minimum
    double dl = closestUtil(Px, Pyl, mid);
    double dr = closestUtil(Px + mid, Pyr, n - mid);

    double d = min(dl, dr);

    // Find strip which satisify < d
    // Strip will also be sorted according to Y
    Point strip[n];
    int j = 0;
    loop(0,n)
    {
        // Point is in strip if at distance <= d from vertical midpoint line
        if(abs(Py[i].x - midPoint.x) < d)
            strip[j] = Py[i], j++;
    }

    // Now return a better distance if available
    return stripClosest(strip, j, d);
}
double closest(Point P[], int n)
{
    Point Px[n];
    Point Py[n];

    loop(0,n)
    {
        Px[i] = P[i];
        Py[i] = P[i];
    }
    sort(Px, Px + n, compareX);
    sort(Py, Py + n, compareY);
  
    return closestUtil(Px, Py, n);
}
int main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    int t1 = t;
    while (t--)
    {
        int n;
        cin >> n;
        Point P[n];
        double x, y;
        loop(0,n)
        {
            cin >> x >> y;
            P[i].x = x;
            P[i].y = y;
        }   
        double ans = closest(P,n);
        cout<<fixed<<setprecision(10)<<"Case "<<t1-t<<": "<<ans<<nl
    }
    return 0;
}

