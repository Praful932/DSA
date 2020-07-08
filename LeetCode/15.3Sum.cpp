#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    LeetCode Problem 15
*/
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
        loop(0,n)
            cin>>a[i];
        vector<vector<int>> res;
        sort(a.begin(),a.end());
        loop(0,n)
        {
            // fix first number
            // a no can have more than one triple eg -4 2 2, -4 3 1
            int target = -a[i];
            int j=i+1,k=n-1;
            while(j<k)
            {
                /*
                    If sum is greater than target, there is a possibilty that smaller + previous greater gives target so k--
                    If sum is less than target, there is a possibility that next smaller + greater gives target so j++
                */
                int sum = a[j] + a[k];
                if(sum>target)
                    k--;
                else if(sum<target)
                    j++;
                else
                {
                    vector<int> q={-target,a[j],a[k]};
                    res.push_back(q);
                    //skip over 2nd number duplicates
                    while(j<k && q[1]==a[j])
                        j++;
                    // skip over 3rd number duplicates
                    while(j<k && q[2]==a[k])
                        k--;
                }   
            }     
            // skip over 1st number duplicates
            while(i<n-1 && a[i]==a[i+1])        
                i++;
        }
        loop(0,res.size())
        {
            for(int j=0;j<res[i].size();j++)
                cout<<res[i][j]<<" ";
            cout<<newline
        }
    }
    return 0;
}