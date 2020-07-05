#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
/*
    nth ugly number
    Ugly numbers only have factors of 2,3,5
    First ugly number - 1
    Next ugly number min(Current_ugly*2,Current_ugly*3,Current_ugly*5)
    Keep Three pointers for each factor
    Increment corresponding pointer according to calculated ugly number
    For numbers like 30, all three are factors(all will be incremented), so all pointers will reach together at 30
    15*2,10*3,6*5
    Numbers before them will be covered already since they are less than 30
*/
int main()
{
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        a[0] = 1;
        int p1=0,p2=0,p3=0;
        loop(1,n)
        {
            int number = min(2*a[p1], min(3*a[p2], 5*a[p3]));
            a[i] = number;
            if(number==2*a[p1])
                p1++;
            if(number==3*a[p2])
                p2++;
            if(number==5*a[p3])
                p3++;
        }       
        cout<<"Nth ugly number: "<<a[n-1]<<newline
    }
    return 0;
}