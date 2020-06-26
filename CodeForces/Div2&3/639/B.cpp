#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll cards(ll h)
{
    return (h + 3*h*h)/2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int no_of_pyramids=0;
        ll totalcards;
        cin >> totalcards;
        ll a=3,b=1,c,discriminant;
        ll x1,x2;
        if(totalcards<=1)
            no_of_pyramids = 0;
        else if(totalcards==2)
            no_of_pyramids = 1;
        else
        {
            while(totalcards>1)
            {
                c=-2*totalcards;
                discriminant = b*b - 4*a*c;
                if (discriminant > 0)
                {
                x1 = (-b + sqrt(discriminant)) / (2*a);
                x2 = (-b - sqrt(discriminant)) / (2*a);
                }
                else if (discriminant == 0) 
                    x1 = (-b + sqrt(discriminant)) / (2*a);
                else
                {
                    x1 = -b/(2*a);
                    x2 =sqrt(-discriminant)/(2*a);
                }

                if(x1>0)
                    totalcards = totalcards - cards(floor(x1));
                else if(x2>0)
                    totalcards = totalcards - cards(floor(x2));
                // cout<<x1<<"\t"<<x2<<"\t";
                no_of_pyramids++;
            }
        }
        cout<<no_of_pyramids<<"\n";
    }
    return 0;
}