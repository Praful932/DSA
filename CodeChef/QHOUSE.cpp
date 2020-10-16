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

int main()
{   
    /*
        x-limit -> -1000 <-> 1000
        y-limit ->    0  <-> 1000
    */
    // OJ;
    int area = 0;

    // First find length from origin to side using Binary search
    // limit 1 -> 1000

    int low = 1, high = 1000, mid;
    string ans;
    while(low<=high)
    {
        mid = (low + high)/2;
        cout<<"? "<<mid<<" 0\n";
        fflush(stdout);
        cin >> ans;
        if(ans == "YES")
            low = mid + 1;
        else
            high = mid - 1;
    }   
    int square_side = high * 2;
    area += square_side * square_side;
    
    // square base on x axis is (high, 0)
    // the mid point where the base touches the square is (0, square_side)

    // Find triangle base/2 now
    low = 1, high = 1000;
    while(low<=high)
    {
        mid = (low + high)/2;
        cout<<"? "<<mid<<" "<<square_side<<nl;
        fflush(stdout);
        cin >> ans;
        if(ans == "YES")
            low = mid + 1;
        else
            high = mid - 1;
    }   
    int base = 2*high;

    // Find height of triangle
    low = square_side, high = 1000;   
    while(low<=high)
    {
        mid = (low + high)/2;
        cout<<"? 0 "<<mid<<nl;
        fflush(stdout);
        cin >> ans;
        if(ans == "YES")
            low = mid + 1;
        else
            high = mid - 1;
    }   
    int height = high - square_side;
    area += 0.5 * base * height;
    cout<<"! "<<area<<nl;
    fflush(stdout);
    return 0;
}

