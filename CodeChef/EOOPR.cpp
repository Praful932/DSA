#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define nl "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main()
{   
    OJ;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        // change x to y in minimum steps
        // you can + odd and - even

        if(x > y)
        { 
            /*
                8  2  
                6  1
                -2 -9
                
                Difference is even - 1 step
                Odd - 2 steps

                6 1
                6 + x = 1
                x = - 5
                3 - 8

                -2 -9
                -2 + x = -9
                x = -7
                7 - 14
                odd - even = odd
                so if even is greater than odd, I can perform a subtraction since the result is negative
                HACKKK! 
            */

           int diff = x - y;
           if(diff & 1)
           {
               // if difference is odd
               cout<<2<<nl
           }
           else
           {
               cout<<1<<nl
           }
        }
        else if(x < y)
        {
            // you can + odd and - even
            /*
            2 8
            2 10
            1 6
            -9 -2

            2 + x = 8
            x = 6 
            Here we want to make a even odd + even = odd Ooops
            odd + odd is even tho !!!
            6 = 3 + 3 damnnnn!  Difference betn 2 & 8 is 6 - even

            2 + x = 10
            x = 8
            so we have been dividing even right
            2 -> 1 + 1
            4 -> 2 + 2 -> 1 + 1 + 1 + 1 thats too many steps
            6 -> 3 + 3. Fine af
            8 -> 4 + 4 -> we know how this sh*t goes...
            Can we make an 8??
            13 - 8 + 3
            odd - even + odd
            See the HACK???  -> odd + odd - even !!! PEACE!
            3 steps.
            Lets make a 4.
            9 - 6 + 1  =  4 -> Hell Yes
            3 steps.
            So what did we see,
            1. If the difference is even & multiple of 4 -> 3 steps
            2. ---||--- & not multiple of 4 -> 2 steps

            1 6
            Diff = 5
            We can add odd ezzz 1 step
            1. If difference is odd, 1 step
            */

           int diff = y - x;

            if(diff & 1)
                cout<<1<<nl
            else
            {
                if(diff % 4 == 0)
                    cout<<3<<nl
                else
                    cout<<2<<nl
            }
        
        }
        else
        {
            cout<<0<<nl
        }
    
    }
    return 0;
}

