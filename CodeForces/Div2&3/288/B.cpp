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
    string s;
    cin>>s;
    int n = s.length();
    vector<int> number(n,0);
    int flag = 0;
    loop(0,n)
    {
        number[i] = s[i] - '0';
        if(number[i]%2==0)
            flag = 1;
    }
    if(flag==0 || number[n-1]%2==0)
        cout<<"-1";
    else
    {
        int index = 0;
        loop(0,n)
        {
            if(number[i]%2==0)
            {
                if(number[i]<number[n-1])
                {
                    index = i;
                    break;
                }
                index = i;
            }
        }
        int temp = number[n-1];
        number[n-1] = number[index];
        number[index] = temp;   
        loop(0,n)
            cout<<number[i];
    }
    
    return 0;
}