#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    Count no. of triplets. 
    No. of three numbers which make sum.
    eg 2 3 5
*/ 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        loop(0,n)
            cin>>a[i];
        int j,k;
        int count=0,sum;
        sort(a.begin(),a.end());
        /*
            Since vector is sorted:
            If sum is greater, we need smaller, so shift right pointer to left
            If sum is smaller, we need greater, so shift left pointer to right
        */
        for(int i=n-1;i>=0;i--)
        {
            j=0;            
            k=i-1;
            while(j<k)
            {
                sum = a[j] + a[k];
                if(sum==a[i])
                {
                    // Since multiple su
                    count++;
                    j++;
                    k--;
                }
                else if(sum>a[i])
                    k--;
                else
                    j++;
            }    
        }
        if(!count)
            cout<<-1<<newline
        else
            cout<<count<<newline
    }
    return 0;
}