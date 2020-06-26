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
        /*
        Convert x to y
        
        */
        int n;
        cin >> n;
        string x,y;
        cin>>x>>y;
        int flag = 0;
        // cout<<1<<newline
        // pos_letter contains position of char c at c - 'a'
        vector<int> pos_letter(26,-1);
        // contains indexes of elements that need change
        // change[0] contains indexes in x which need to be filled with a(which is in y[i])
        vector<int> change[26];
        int li = INT_MIN;
        loop(0,n)
        {
            if(x[i]<y[i])
            {
                flag = 1;
                break;
            }
            if(pos_letter[x[i] - 'a']==-1)
                pos_letter[x[i] - 'a'] = i;
            if(x[i]!=y[i])
            {
                change[y[i] - 'a'].push_back(i);
                li = max(li,y[i] - 'a');
            }
        }
        if(flag)
            cout<<-1<<newline
        else
        {
            // check if y doesnt contain any char which is not in a
            loop(0,n)
            {
                if(pos_letter[y[i] - 'a'] == -1)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
                cout<<-1<<newline
            else
            {
                vector<int> result[100];
                // start from max that needs to be replaced
                int count = 0;
                for(int i=li;i>=0;i--)
                {
                    // if bucket is not empty
                    if(!change[i].empty())
                    {
                        // push letter that needs to be replaced with
                        // this will be the minimum subset
                        change[i].push_back(pos_letter[i]);
                        sort(change[i].begin(),change[i].end());
                        result[count].push_back(change[i].size());
                        for(auto ele:change[i])
                            result[count].push_back(ele);
                        count++;
                    }
                }
                cout<<count<<newline
                loop(0,count)
                {
                    for(auto ele:result[i])
                        cout<<ele<<" ";
                    cout<<newline
                }
            }
        }
    }
    return 0;
}