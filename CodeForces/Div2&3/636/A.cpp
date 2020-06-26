//  Div 3
#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    int i,flag=1;
    for (i = 2; i <= sqrt(n); i++) { 
  
        // If n is divisible by any number between 
        // 2 and n/2, it is not prime 
        if (n % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
    if(flag==1)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        if(isprime(n))
        {
            cout<<1<<"\n";
        }        
        else
        {   
            int i = 2;
            int tocheck = pow(2,i) - 1;
            while(n % tocheck)
            {
                i++;
                tocheck = pow(2,i) - 1;
            }
            cout<<n/tocheck<<"\n";
        }
    }
    return 0;
}