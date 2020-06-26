#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;

bool vowel(char c)
{
    if(c=='a' || c=='e' || c== 'i' || c=='o' || c=='u')
        return true;
    return false;
}
int main()
{
    OJ;
    string a;
    cin>>a;
    string s="";
    int length= a.length();
    if(length ==1)
    {
        if(!vowel(tolower(s[0])))
        {
            s.push_back('.');            
            s.push_back(tolower(a[0]));
        }
    }
    else
    {
        for(int i=0;i<length;i++)
        {
            if(!vowel(tolower(a[i])))
            {
                s.push_back('.');
                s.push_back(tolower(a[i]));
            }
        }     
    }
    cout<<s<<newline;  
    return 0;
}