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
        int chef=0,morty=0;
        int sum1,sum2;
        while(n--)
        {
            sum1=0,sum2=0;
            string c,m;
            cin>>c>>m;
            loop(0,c.length()) 
                sum1 += c[i] - '0';
            loop(0,m.length())
                sum2 += m[i] - '0';
            if(sum1>sum2)
                chef++;
            else if(sum1<sum2)
                morty++;
            else
                chef++,morty++;
        }       
        if(chef>morty)
            cout<<0<<" "<<chef<<newline
        else if(chef<morty)
            cout<<1<<" "<<morty<<newline
        else
            cout<<2<<" "<<chef<<newline
    }
    return 0;
}