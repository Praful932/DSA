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

ll merge(vector<ll> &a, int low,int mid, int high)
{
    ll count = 0;
    // sort low to high
    // and returns count of total inverted elements

    // eles in left subarray
    int m = mid - low + 1;
    // eles in right subarray
    int n = high - mid;
    ll L[m];
    ll R[n];

    loop(0,m)
        L[i] = a[low + i];
    
    loop(0,n)
        R[i] = a[mid + 1 + i];

    // Left, Right, Merged Indexes
    int i=0, j=0, k=low;

    while(i<m && j<n)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }   
        else if(L[i] > R[j])
        {
            a[k] = R[j];
            j++;
            count += m - i;
        }
        k++;
    }
    while(i < m)
        a[k++] = L[i++];

    while(j < n)
        a[k++] = R[j++];
    
    return count;
}

ll mergesort(vector<ll> &a, int low, int high)
{
    ll mid, inv_count = 0;
    if(low<high )
    {
        mid = (high + low)/2;
        
        inv_count += mergesort(a, low, mid);
        inv_count += mergesort(a, mid + 1, high);

        inv_count += merge(a, low, mid, high);
    }    
    else
    {
        return 0;
    }
    
    return inv_count;
}
int main()
{   
    OJ;
    int n;
    cin>>n;
    vector<ll> a(n, 0);
    loop(0,n)
        cin >> a[i];
    // Count inversions
    ll inversions = mergesort(a, 0, n - 1);
    cout<<inversions<<nl
    return 0;
}

