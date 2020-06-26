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
    int t;
    cin >> t;
    int test = t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        loop(0,n)
            cin>>a[i];
        int countdown = k;  
        int freq=0;
        loop(0,n)
        {
            if(a[i]==k && k)
            {
                k--;
                if(a[i]==1)
                {
                    k = countdown;
                    freq++;
                }
            }
            else if(a[i]==countdown)
                k = countdown - 1;
            else
                k = countdown;
        }
        cout<<"Case #"<<test-t<<": "<<freq<<newline
    }
    return 0;
}