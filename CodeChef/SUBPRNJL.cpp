#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
#define oset tree<pair<int, int>, null_type,less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> 
#define nl "\n";
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
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);        
        loop(0,n)
              cin>>a[i];
        /*
          iterate through each subarray
          0-0
          0-1    1-1
          0-2    1-2   ..
          0-3    1-3 
          ..     ..  
          0-n-1  1-n-1 ..
        */
        int ans = 0;
        loop(0,n)
        {
            
            // for each subarray
            oset s;
            // There may be duplicate elements in a given subarray
            int freq[2001] = {0};
            for(int j=i;j<n;j++)
            {
                // calculate min concatenated length of subarray
                int m = ceil(double(k)/(j - i + 1));
                // Find index of number
                int index = ceil((double)k/m) - 1;
                // To store same numbers
                s.insert({a[j], freq[a[j]]++});

                // find kth smallest in concatenated subarray
                auto it = s.find_by_order(index);
                int ele = (*it).first;
                int freqele = freq[ele];

                // beautiful if ele also occurs in the subarray
                if(freq[freqele] > 0)
                    ans++;
            }   
        }
        cout<<ans<<nl
    }
    return 0;
}
