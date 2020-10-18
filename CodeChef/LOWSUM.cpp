#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define oset tree<pair<ll,int>, null_type,less<pair<ll,int>>, rb_tree_tag,tree_order_statistics_node_update> 
#define nl "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main()
{   
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int k, q;
        cin >> k >> q;
        vector<ll> a(k, 0);
        vector<ll> b(k, 0);        
        // vector<int> queries(q, 0);
        loop(0,k)
            cin>>a[i];
        loop(0,k)
            cin>>b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        // max heap because .top() at every iter will give the current max limit, so any element won't go missed
        priority_queue<ll> pq;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(pq.size() < 10000)
                    pq.push(a[i] + b[j]);
                else if(a[i] + b[j] < pq.top())
                {
                    // there is a element which is greater than the current first 10k sums
                    pq.pop();
                    pq.push(a[i] + b[j]);
                }
                else
                {
                    // not interested in the current jth element since sum would be increasing
                    // but not next i
                    break;
                }
            }
        }
        vector<ll> answer;
        while(!pq.empty())
        {
            answer.push_back(pq.top());
            pq.pop();
        }
        // since max heap
        reverse(answer.begin(), answer.end());
        while(q--)
        {
            int idx;
            cin >> idx;
            cout<< answer[idx - 1]<<nl
        }

    }
    return 0;
}

