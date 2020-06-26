#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        ll firstpartsum = pow(2,n) + (2 * (pow(2,(n/2) - 1) - 1));
        ll secondpartsum = (pow(2,n/2) - 1) * pow(2,n/2);
        cout<<abs(firstpartsum-secondpartsum)<<"\n";
    }
    return 0;
}