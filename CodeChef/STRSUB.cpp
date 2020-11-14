#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define int long long
#define ll long long
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define nl "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fastio \
    ios::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);

signed main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        // maps biggest L->R
        map<int,int> seq;
        int n, limit, q;
        cin >> n >> limit >> q;
        // indexing from 1
        vector<int> a(n + 1, 0);
        string s;
        cin >> s;

        loop(1 ,n + 1)
            a[i] = s[i - 1] - '0';

        int start, end;
        vector<pair<int, int>> queries;

        loop(0, q)
        {   
            cin >> start >> end;
            queries.push_back({start, end});
            
        }

        // min substring length
        int maxlength = 2*limit;

        int index;
        
        // Precompute far[i]
        // far[i] is the first value for the ith character such that the substring becomes invalid
        vector<int> far(n + 1,0);
        // sumfar because for each i we need sum from i=L to a valid K. so precompute
        vector<int> sumfar(n + 1,0);
        int j = 1;
        int count1 = 0, count0 = 0;
        if(a[j])
            count1++;
        else
            count0++;
        loop(1, n+1)
        {
            while(j<=n and count1<=limit and count0<=limit)
            {
                j++;
                if(j>n)
                    break;
                if(a[j])
                    count1++;
                else
                    count0++;
            }
            // first invalid j
            far[i] = j;

            // subtract for next i
            if(a[i])
                count1--;
            else
                count0--;
        }
        sumfar[0] = 0;
        loop(1, n +1)
            sumfar[i] = sumfar[i - 1]  + far[i];
        loop(0 ,q)
        {
            /*
                Substring generation
                a b c d
                a->ab->abc->abcd
                b->bc->bcd
                c->cd

                Now what we can do is:
                2 3 4 5 6
                
                For substrings starting with i(2),
                if there is some j_(5) which satisfies then defenitly
                then i+1(3) to j_ will defently satisfy so instead of evaluating
                from from j=1 for i+1, we can start from j_ + 1,
                and for computing the sum what we can do is subtract accordingly according 
                to the value at i(2) since now we are starting from i+1

                Next optimization
                We know that substrings starting with the ith character has a j_ + 1, such that it is invalid here onwards
                Now lets denote this invalid number for the ith character as j, this number is either > end or not greater than end
                Lets denote the true invalid which is out of range of R as far[i] which we will compute beforehand
                i.e. j = min(far[i], R + 1)
                either of them is the invalid one and thats what we need when we compute for each ith char
                i.e here ans += j - i
                Now our algo becomes:

                def answer_query(L, R):
                answer = 0
                for i in L...R
                    j = min(far[i], R+1) # R+1 is the first j such that j > R
                    answer += j - i
                return answer

                Since far is a montonous function, We can simplify the equation and binary search on the first k for far[k] such that
                far[k] <= R
                because at the first when far[i] will be less than R 
            */
            ll ans = 0;
            start = queries[i].first, end = queries[i].second;
            
            int low = start - 1;
            int high = end  + 1;
            // We need to find such k fo far[k] such that it is the last k for which far[k] <= R and far[k + 1] > R

            while(high - low > 1) 
            {
                int mid = (low + high)/2;
                if(far[mid] <= end)
                    low = mid;
                else 
                    high = mid;
            }
            int val = low;
            
            ans = sumfar[val] - sumfar[start - 1] + (end - val) * (end + 1) - (end*(end + 1)/2 - start*(start - 1)/2);
            cout<<ans<<nl
        }
        
    }
    return 0;
}

