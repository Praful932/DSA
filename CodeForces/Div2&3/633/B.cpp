#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        if(n%2==1)        
        {
            int index  = n/2;
            cout<<a[index]<<" ";
            int left = index - 1;
            int right = index + 1;
            while(left>=0)
            {
                cout<<a[left]<<" ";
                cout<<a[right]<<" ";
                left--;
                right++;
            }
        }
        else
        {
            int right = n/2;
            int left = right - 1;
            while(left>=0)   
            {
                cout<<a[left]<<" ";
                cout<<a[right]<<" ";
                left--;
                right++;
            }
        }        
        cout<<"\n";
    }
    return 0;
}