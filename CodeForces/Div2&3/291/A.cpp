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
    string no;
    cin>>no;
    string dup = no;
    string number;
    
    for(int i=0;i<no.length();i++)
    {
        int d = no[i] - '0';
        if(d<5)
            number.push_back('0' + d);  
        else if(i==0 && d==9)
            number.push_back('9');
        else
            number.push_back('9' - d);
    }
    cout<<number<<newline
    return 0;
}