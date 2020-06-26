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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    loop(0,n)
        cin>>a[i];
        
    
    int no = 0;

    int freq25 = 0;
    int freq50 = 0;
    loop(0,n)
    {
        if(!i && a[i]!=25)
        {
            no = 1;
            break;
        }
        else
        {
            if(a[i]==25)
                freq25++;
            else if(a[i]==50)
            {
                if(freq25)
                {
                    freq25--;
                    freq50++;
                }
                else
                {
                    no = 1;
                    break;
                }
            }
            else
            {
                if(a[i]==100)
                {
                    if(freq50 && freq25)
                    {
                        freq50--;
                        freq25--;
                    }
                    else if(freq25>2)
                        freq25 -= 3;
                    else
                    {
                        no = 1;
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
    return 0;
}