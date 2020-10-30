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
bool f(vector<int> &a, int cows, int distance)
{
    // we can always place cow at first position
    int count = 1;
    
    int lastcow = 0;
    int n = a.size();
    loop(1,n)
    {
        if((a[i] - a[lastcow]) >= distance) 
        {
            // we can place cow here
            count++;
            lastcow = i;
        }

        // if all cows have been fitted
        if(count >= cows)
            return true;
    }
    
    
    // couldn't fit all cows
    return false;
}
int main()
{   
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        // given n slots for barn
        // Question - Assign the cows to stalls such that (min distance between any two of them is as large as possible)
        /*
            5 slots, 3 cows
            1 2 4 8 9
            c   c c   Ans - Min distance - 3, Distances : 3, 4 so all distanes >= 3
            If it is true for d then it is defenitly true for d-1 , use same config 
            Binary search over Function - f(d) - no. of cows such that can fit with distance >= d
            The distance f(d) where f(d) is True and f(d + 1) is False is the maximum distance 
        */
        // Find the maximum distance d by placing c cows in n slots such that the distance between every cow is >= d
        int n, c;
        cin >> n >> c;
        vector<int> a(n, 0);
        loop(0,n)
            cin >> a[i];
        sort(a.begin(), a.end());

        // max distance cannot exceed high
        int low = 0, high = a[n - 1] - a[0];
        int mid;
        int ans;
        while(low<=high)
        {
            mid = low + (high - low)/2;
            if(f(a, c, mid) and (!f(a,c,mid + 1)))
            {
                ans = mid;
                break;
            }
            else if(f(a,c,mid))
            {
                // there is a better solution
                low = mid + 1;
            }
            else
            {
                // we need to go left
                high = mid - 1;
            }
        }
        cout<<ans<<nl
        
    }
    return 0;
}

