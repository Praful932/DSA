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
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        loop(0,n)
            cin>>a[i];
        int windowstart = 0, maxseq = 0, windowlength = 0;
        
        // element, frequency
        map<int,int> freq;

        loop(0,n)
        {
            freq[a[i]]++;
            windowlength += 1;
            // if window length < k
            if(freq.size() < k)
                maxseq = max(maxseq, windowlength);
            else if(freq.size() == k)
            {
                freq[a[windowstart]]--;
                if(freq[a[windowstart]] == 0)
                    freq.erase(a[windowstart]);
                // one ele erased
                windowlength--;
                windowstart++;                
            }
        }
        cout<<maxseq<<newline
    }
    return 0;
}