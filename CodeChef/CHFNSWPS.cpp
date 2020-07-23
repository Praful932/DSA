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
        Odd frequency - not possible
        match large numbers with small numbers
        If array A has 4 X and array B has 18 X
        swaps required = (18-4)/2 = 7
        And freq in both arrays will always be even even / odd odd
        Min swaps will be minimum of 2*min ele & smallest in A & largest in B
    */
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n, 0);
        vector<ll> b(n, 0);
        map<ll,ll> freq;
        map<ll,ll> freqa;
        map<ll,ll> freqb;
        ll x=0;
        loop(0,n)
        {
            cin>>a[i];
            freq[a[i]]++;
            freqa[a[i]]++;
            x ^= a[i];
        }
        loop(0,n)
        {
            cin>>b[i];
            freq[b[i]]++;
            freqb[b[i]]++;
            x ^= b[i];
        }
        ll minab = min(*min_element(a.begin(),a.end()),*min_element(b.begin(),b.end()));
        if(x)
            cout<<-1<<newline
        else if(freqa == freqb)
            cout<<0<<newline
        else
        {
            vector<int> froma;
            vector<int> fromb;
            for(auto i:freqa)
            {
                ll number = i.first;
                if(i.second > freqb[number])
                {
                    ll total = (i.second - freqb[number])/2;
                    while(total--)
                        froma.push_back(number);
                }
            }
            for(auto i:freqb)
            {
                ll number = i.first;
                if(i.second > freqa[number])
                {
                    ll total = (i.second - freqa[number])/2;
                    while(total--)
                        fromb.push_back(number);
                }
            }
            sort(froma.begin(),froma.end());
            sort(fromb.begin(),fromb.end(), greater<int>());
            // swaps same
            n = froma.size();
            ll cost = 0;
            loop(0,n)
                cost += min(2*minab,(ll)min(froma[i],fromb[i]));
            cout<<cost<<newline
        }
    }
    return 0;
}