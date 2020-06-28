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
        cin >> n;
        vector<int> a(n, 0);
        map<int,int> freq;
        int max_ele = INT_MIN;
        int invalid = 0;
        int dup = 0;
        loop(0,n)
        {
            cin>>a[i];
            max_ele = max(a[i],max_ele);
            freq[a[i]]++;
            if(freq[a[i]]>2)
                invalid = 1;
            if(freq[a[i]]>1)
                dup = 1;
        }
        if(invalid || (freq[max_ele]>1))
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            sort(a.begin(),a.end());
            if(dup)            
            {
                // Duplicate present
                set<int> s1,s2;
                loop(0,n)
                {
                    if(a[i]!=max_ele)
                    {
                        if(freq[a[i]]==1)
                        {
                            s1.insert(a[i]);
                        }
                        if(freq[a[i]]==2)
                        {
                            s1.insert(a[i]);
                            s2.insert(a[i]);
                        }
                    }
                }
                for(auto ele:s1)
                    cout<<ele<<" ";
                cout<<max_ele<<" ";
                for(auto it=s2.rbegin();it!=s2.rend();it++)
                    cout<<*it<<" ";
            }
            else
            {
                loop(0,n)
                    cout<<a[i]<<" ";
            }
            cout<<newline
        }
    }
    return 0;
}