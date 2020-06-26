// Div 4
#include <bits/stdc++.h>
#define newline cout<<"\n";
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int base=1;
        int n, k;
        cin >> n;
        vector<int> round;
        while(n)
        {
            int d = n%10;
            if(d)
                round.push_back(d*base);
            n = n/10;
            base *=10;
        }   
        cout<< round.size()<<"\n";
        for(int i=0;i<round.size();i++)
            cout<<round[i]<<" ";
        newline
    }
    return 0;
}