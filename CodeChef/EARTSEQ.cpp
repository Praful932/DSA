// Ref - https://www.codechef.com/viewsolution/22225508

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
#define N 1000001
int main()
{   
    OJ;
    fastio;
    int n, arr[] = {6, 10, 15};
    bool a[1000001] = {0};

    vector<int> v;
    
    for(int i=2;i<N;i++)
    {
        if(!a[i])
        {
            v.push_back(i);
            for(int j=i;j<N;j+=i)
                a[j] = true;            
        }
    }
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n;

        int x = n % 3;

        if(x == 0)
            cout<<"6 10 15 ";
        else if(x == 1)
            cout<<"21 14 10 15 ";
        else
            cout<<"33 77 14 10 15 ";
        
        // remove printed elements
        n -= n % 3 + 3;

        loop(0,n)
            cout<< v[i + 5] * arr[i % 3]<<' ';
        cout<<nl
        
    }
    return 0;
}

