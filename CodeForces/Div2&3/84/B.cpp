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
        vector<bool> girl(n+1,false);
        map<int,bool> prince;
        int total_k = n;
        while(n--)
        {
            int k;
            cin>>k;
            int taken = 0;
            loop(0,k)
            {
                int pno;
                cin>>pno;
                if(prince[pno]==0 && taken==0)
                {
                    prince[pno] = true;
                    girl[total_k - n] = true;
                    taken = 1;
                }
            }
        }
        int flag = 0;
        loop(1,total_k+1)
        {
            if(girl[i]== false)
            {
                cout<<"IMPROVE\n"<<i<<" ";;
                flag = 1;
                for(int j =1;j<=total_k;j++)
                {
                    if(prince[j]==false)
                    {   
                        cout<<j<<newline
                        break;
                    }
                }
                break;
            }
        }
        if(flag==0)
            cout<<"OPTIMAL\n";
    }
    return 0;
}