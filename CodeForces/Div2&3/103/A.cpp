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
    cin>>n;
    vector<int> a(n,0);
    loop(0,n)
        cin>>a[i];
    int maxele = *max_element(a.begin(),a.end());
    int minele = *min_element(a.begin(),a.end());
    int secs = 0;
    if(maxele == a[0] && minele == a[n-1])
        secs = 0;
    else
    {
        // loop both ways
        // front
        loop(0,n)
        {
            if(a[i] == maxele)
            {
                secs = i;
                break;
            }
        }

        // Remove and insert element at front
        a.erase(a.begin() + secs);
        a.insert(a.begin(), maxele);

        // back
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==minele)
            {
                secs += n - i - 1;
                break;
            }                
        }
    }
    cout<<secs<<newline
    return 0;
}