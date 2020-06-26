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
        loop(0,n)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        int distinctele = freq.size();
        int maxfreq=0;

        for(int no:a)
            maxfreq = max(freq[no],maxfreq);

        sort(a.begin(),a.end());
        // only one element
        if(n==1)
            cout<<0<<newline
        // if all elements are unique or if all are same
        else if(freq.size()==1 || a.front()==a.back())
            cout<<1<<newline
        else
        {
            if(distinctele==maxfreq)
                cout<<distinctele - 1<<newline
            else
                cout<<min(distinctele,maxfreq)<<newline
        }
    }
    return 0;
}