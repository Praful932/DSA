#include <bits/stdc++.h>
using namespace std;
int n;
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
bool check(int maxsize, vector<int> a)
{
    /*
        Only two sets are possible:
            maxele n-maxele
            n-maxele maxele
        If one set contains 1 to maxele
        other set will defeneitly contain 1 to n-maxele as those are the only 
        remaining places. After that just check partition from both sides.
        Here it would be if instead of | 1 4 it was | 1 2.  1,2
        1 4 3 2 | 1 4
    */
    map<int, int> elefreqpart1;

    // left part freq
    for (int i = 0; i < maxsize; i++)
        elefreqpart1[a[i]]++;

    // check if left side contains repetitive or missing eles
    // 1 bcos elements start from 1
    for (int i = 1; i <= maxsize; i++)
        if (elefreqpart1[i] != 1)
            return false;

    // right part freq
    map<int, int> elefreqpart2;

    for (int i = maxsize; i < n; i++)
        elefreqpart2[a[i]]++;
    // check if only 1 to n-maxsize are the
    // elements which are present
    for (int i = 1; i <= n - maxsize; i++)
        if (elefreqpart2[i] != 1)
            return false;

    return true;
}
int main()
{
    /*
        since 2 sets, set will be of len(max_ele)
        1 4 3 2 | 1 4
        1 4 | 3 2 1 4
    */
    int t;
    cin >> t;
    while (t--)
    {
        set<pair<int, int>> result;
        int maxele = 0;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxele = max(a[i], maxele);
        }
        if (check(maxele, a))
            result.insert(make_pair(maxele, n - maxele));

        if (check(n - maxele, a))
            result.insert(make_pair(n - maxele, maxele));

        cout<< result.size()<<endl;

        for(auto i:result)
            cout<<i.first<<" "<<i.second<<endl; 
    }
    return 0;
}