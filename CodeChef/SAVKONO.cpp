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
        int n, z;
        cin >> n >> z;
        vector<int> a(n, 0);
        loop(0,n)
            cin>>a[i];

        // Intialize max heap
        priority_queue<int> pq(a.begin(), a.end());
        int element;
        int flag = 0;
        int attacks = 0;
        while(!pq.empty())
        {
            element = pq.top();
            pq.pop();
            z -= element;
            element = (element/2);
            attacks += 1;
            if(element!=0)
                pq.push(element);
            if(z<=0)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            cout<<attacks<<newline
        else
            cout<<"Evacuate\n";
    }
    return 0;
}