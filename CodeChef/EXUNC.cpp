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
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1, 0);

    loop(1,n + 1)
        cin>>a[i];

    // keep a set, where if ith element is there another series starts from ith element
    //indexing starts from 1
    set<int> s;
    s.insert(1);
    loop(2,n + 1)
    {
        // if current ele is multiple of previous
        if(a[i] % a[i - 1] == 0)
            continue;
        else
            s.insert(i);
    }
    // 
    int x, y, z;
    loop(0,q)
    {
        cin >> x;
        if(x == 1)
        {
            cin >> y >> z;
            a[y] = z;
            // Pi - Partition i
            // assume this operations separates P1 (P2(1 element)) P3
            s.insert(y);
            // if the current number is a multiple of the previous number
            if(y - 1 >= 1)
                if(a[y] % a[y - 1] == 0)
                    s.erase(y);
            
            // if the next number is a multiple of the current number
            if(y <= n && (s.find(y + 1) != s.end()))
            { 
                if(a[y + 1] % a[y] == 0)
                    s.erase(y + 1);
            }

            if(a[y+1] % a[y] != 0)
                s.insert(y + 1);

        }
        else
        {
            cin >> y;
            auto it = s.upper_bound(y);
            cout<<*(--it)<<newline
        }
    }
    return 0;
}