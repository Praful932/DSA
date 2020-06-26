#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;

bool check(string s)
{
    if(s.find('1')== string::npos)
        return false;
    if(s.find('2')==string::npos)
        return false;
    if(s.find('3')==string::npos)
        return false;
    return true;
}
int findmaxmin(vector<int> &pos)
{
    int maxele = *max_element(pos.begin(),pos.end());
    int minele = *min_element(pos.begin(),pos.end());
    return maxele - minele + 1;
}
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int minlength = 0;
        if(check(s) && s.length()==3)
            cout<<3<<newline
        else if(check(s))
        {
            int length = s.length();
            vector<int> pos(3,-1);
            int minlength = INT_MAX;
            for(int i=0;i<length;i++)
            {
                pos[s[i] - '1'] = i;
                if(pos[0]!=-1 && pos[1]!=-1 && pos[2]!=-1)
                    minlength = min(minlength, findmaxmin(pos));
            }
            cout<<minlength<<newline
        }
        else
            cout<<0<<newline
    }
    return 0;
}