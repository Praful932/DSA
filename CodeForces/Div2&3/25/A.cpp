#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
template<class datatype>
void print(datatype a)
{ cout<<a<<" "; }

template<class datatype>
void println(datatype a)
{ cout<<a<<"\n"; }

int main()
{
    OJ;
    int n;
    int even=0;
    int odd=0;
    int evenindex;
    int oddindex;
    cin >> n;
    vector<int> a(n,0);
    loop(0,n)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even++;
            evenindex=i;
        }
        else
        {
            odd++;
            oddindex=i;
        }
    }
    if(odd==1)    
        print(oddindex+1);
    else
        print(evenindex+1);
    return 0;
}