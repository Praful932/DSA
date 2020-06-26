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
    string s="tree";
    map<char,int> freqchar;
        for(char c:s)
            freqchar[c]++;
    for(auto i:freqchar)
        cout<<i.second<<" "<<string(i.second,i.first)<<newline 
    
    return 0;
}