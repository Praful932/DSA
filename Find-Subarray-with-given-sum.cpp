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
    /*
        t - Test Case
        n - no. of elements in array a
        given_sum - Subarray sum
        Find subarray with given sum and print indices
    */
    int t;
    cin >> t;
    while (t--)
    {
        ll n, given_sum;
        cin >> n >> given_sum;
        vector<ll> a(n, 0);
        loop(0,n)
            cin>>a[i];
        ll sum = 0;
        int startindex = 0,endindex=0,flag = 0;
        loop(0,n)
        {
            sum +=a[i];
            endindex = i;
            if(sum>given_sum)
            {
                while(sum>given_sum)
                {
                    sum -= a[startindex];
                    startindex++;
                }
            }
            
            if(sum==given_sum)
            {
                cout<<startindex+1<<" "<<endindex+1<<newline
                flag = 1;
                break;
            }
        }
        if(!flag)
            cout<<-1<<newline
    }
    return 0;
}