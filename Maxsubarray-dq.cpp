#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;

void push(vector<int> arr, int i, deque<pair<int,int>> &dq)
{
    // push maintains the order of dequeue(desc sorted)
    // max element always at front
    while(!dq.empty())
    {
        // if to be inserted element is greater than min ele of dq
        if(dq.back().second < arr[i])
            dq.pop_back();
        else
            break;           
    }
    dq.push_back({i, arr[i]});
}

int query(int l, int r, deque<pair<int,int>> &dq)
{
    // first checks if dq is in range l -> r
    // then returns the max element
    while(!dq.empty())
    {
        if(dq.front().first < l)
            dq.pop_front();
        else
            break;
    }
    // l->r max is now at first index
    return dq.front().second;
}

int main()
{
    // print k subarray max in O(n)
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        loop(0,n)
            cin>>a[i];

        deque<pair<int,int>> dq;
        // push first k elements
        for(int i=0;i<k;i++)
            push(a, i, dq);
        int l=0, r=k;
        cout<<query(l,r, dq)<<" ";
        for(int r=k;r<n;r++)
        {
            l++;
            push(a, r, dq);
            cout<<query(l,r, dq)<<" ";
        }
        cout<<newline;
    }
    return 0;
}