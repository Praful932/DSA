#include <bits/stdc++.h>
#define newline cout<<"\n";
#define NO cout<<"NO\n";
#define YES cout<<"YES\n";
using namespace std;
void solve(vector <int>a, vector <int>b,int n)
{   
    int flag = 0;
    bool found_one = false;
    bool found_zero = false;
    bool found_negone = false;  
    if(a[0]!=b[0])
    {
        NO
        return;
    }
    else
    {
        if(n==1)
        {
            YES
            return;
        }
        if(a[0]==1)
            found_one = true;
        else if(a[0]==-1)
            found_negone = true;
        else
            found_zero = true;
        for(int i=1;i<n;i++)
        {
            if(found_one && found_negone && found_zero)
            {
                YES
                return;
            }
            else if(a[i]<b[i])
            {   
                if(!found_one)
                {
                    NO
                    return;
                }
                flag = 1;                
            }
            else if(a[i]>b[i])
            {
                if(!found_negone)
                {
                    NO
                    return;
                }
                flag = 1;
            }
            if(a[i]==b[i])
                flag=1;
            if(a[i]==1)
                found_one = true;
            else if(a[i]==-1)
                found_negone = true;
            else
                found_zero = true;
        }   
    }
    if(flag)
    {
        YES
        return;
    }
    NO
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        vector<int> b(n,0);
        for(int i = 0; i < n;i++)        
            cin>>a[i];
        for(int i = 0; i < n;i++)        
            cin>>b[i];
        solve(a,b,n);
    }
    return 0;
}