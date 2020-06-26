// Khaut
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll  n, k;
        cin >> n >> k;
        string s(n,'a');
        // places the leftmost b could be n-2 to 0
        for(int i=n-2;i>=0;i--)
        {
            if(k<=n-i-1)
            {
                s[i] = 'b';
                s[n-k] = 'b';
                break;
            }
            k -= n-i-1;
        }        
        cout<<s<<"\n";
    }
    return 0;
}