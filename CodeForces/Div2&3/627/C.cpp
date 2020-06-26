#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;

char check(string s)
{
    if(s.find('L')==string::npos)
        return 'R';
    if(s.find('R')==string::npos)
        return 'L';
    return '0';
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
        int length = s.length();
        char check_string = check(s);
        if(check_string=='R')
            cout<<1<<newline
        else if(check_string=='L')
            cout<<length+1<<newline
        else
        {
            // maximum length of subsqueuent Ls
            int maxlengthl = INT_MIN;
            int count = 0;
            for(int i=0;i<length;i++)
            {
                if(s[i]=='L')
                    count++;
                else
                {
                    maxlengthl =  max(count,maxlengthl);
                    count = 0;
                }
            }
            // corner case ...LLLL
            maxlengthl = max(count,maxlengthl);
            cout<<maxlengthl+1<<newline
        }        
    }
    return 0;
}