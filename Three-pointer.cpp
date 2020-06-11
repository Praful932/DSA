/*
Sort a list containing only 0,1,2 in one pass
Three pointer technique
*/
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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    loop(0,n)
        cin>>a[i];
    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(a[mid],a[high]);
            high--;
        }       
    }
    loop(0,n)
        cout<<a[i]<<" ";
    return 0;
}