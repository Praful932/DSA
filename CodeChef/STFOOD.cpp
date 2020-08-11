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
    while (t--)
    {
        int n;
        cin >> n ;
        int maxprofit = 0;
        // for each nth food
        while(n--)
        {
            int stores, people, price;
            cin >> stores >> people >> price;
            maxprofit = max(maxprofit, int(people/((stores + 1) *1.0)) * price);
        }
        cout<<maxprofit<<newline
    }
    return 0;
}