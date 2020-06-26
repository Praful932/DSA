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
    map<string,int> data;
    while (t--)
    {
        string s;
        cin>>s;
        if(data[s])
        {
            cout<<s<<data[s]<<newline
            data[s]++;
        }        
        else
        {
            cout<<"OK\n";
            data[s]++;
        }
    }
    return 0;
}