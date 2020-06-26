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
        string s;
        cin>>s;
        int length = s.length();
        if(length%2==0)
        {
            vector<int> s1(26,0);
            vector<int> s2(26,0);
            for(int i=0;i<(length/2);i++)
                s1[s[i] - 'a']++;
            for(int i=length/2;i<length;i++)
                s2[s[i] - 'a']++;
            if(s1==s2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {
            vector<int> s1(26,0);
            vector<int> s2(26,0);
            for(int i=0;i<(length/2);i++)
                s1[s[i] - 'a']++;
            for(int i=length/2 + 1;i<length;i++)
                s2[s[i] - 'a']++;
            if(s1==s2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}