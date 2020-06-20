#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*
    Merge two sorted arrays in O(1) space
    First array will contain first m numbers sorted from both
    Second array will contain rest
*/
using namespace std;
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin >> m >> n;
        vector<ll> a(m, 0);
        vector<ll> b(n, 0);
        loop(0,m)
            cin>>a[i];
        loop(0,n)
            cin>>b[i];
        /*
            Loop through second array from last
            Since first array will contain the smallest 
            elements. Find pos of ith element from last in
            first array(Insertionn sort).
        */
        for(int i=n-1;i>=0;i--)
        {
            int j;
            ll last = a[m-1];
            // Find position for ith element
            for(j=m-2;j>=0 && a[j]>b[i];j--)
            {
                a[j+1] = a[j];
            }
            // Position is j+1
            // If there was atleast one element greater than b[i]
            if(j!=m-2 || last>b[i])
            {
                a[j+1] = b[i];
                b[i] = last;
            }
        }
        loop(0,m)
            cout<<a[i]<<" ";
        loop(0,n)
            cout<<b[i]<<" ";
        cout<<newline
    }
    return 0;
}