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
        int n, x;
        cin >> n;
        vector<int> a(n, 0);
        loop(0,n)
            cin>>a[i];
        int no = 0;
        
        int freq5=0;
        int freq10=0;
        // 5,10,15
        loop(0,n)
        {
            if(!i && a[i]!=5)
            {
                no = 1;
                break;
            }
            else
            {
                if(a[i]==5)
                    freq5++;
                else if(a[i]==10)
                {
                    if(freq5)
                    {
                        freq5--;
                        freq10++;
                    }
                    else
                    {
                        no=1;
                        break;
                    }
                }
                else
                {
                    if(a[i]==15)
                    {
                        if(freq10)
                            freq10--;
                        else if(freq5>1)
                            freq5 -= 2;
                        else
                        {
                            no =1;
                            break;
                        }
                    }
                }
            }
        }
        if(no)
            cout<<"NO\n";
        else 
            cout<<"YES\n";
    }
    return 0;
}