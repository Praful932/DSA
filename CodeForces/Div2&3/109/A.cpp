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
    int maxele = a[0];
    int minele = a[0];
    int amaze = 0;
    loop(1,n)
    {
        if((max(maxele,a[i]) != maxele) || (min(minele, a[i]) != minele))
        {
            amaze++;
            maxele = max(maxele,a[i]);
            minele = min(minele,a[i]);
        }
    }
    cout<<amaze<<newline
    return 0;
}