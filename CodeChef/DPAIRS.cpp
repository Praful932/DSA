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
    int m,n;
    cin >> m >> n;
    vector<pair<int,int>> a;

    int no;
    loop(0,m)
    {
        cin >> no;
        a.push_back({no, i});
    }
    vector<pair<int,int>> b;
    loop(0,n)
    {
        cin >> no;
        b.push_back({no, i});
    }    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // max of vector a
    int maxidx = a[m-1].second;
    // min of vector b
    int minidx = b[0].second;

    // loop through second vector
    loop(0,n)
        cout<<maxidx<<" "<<b[i].second<<newline

    // loop through first vector
    loop(0,m)
    {
        if(a[i].second == maxidx)
            continue;
        else 
            cout<<a[i].second<<" "<<minidx<<newline
    }
    return 0;
}