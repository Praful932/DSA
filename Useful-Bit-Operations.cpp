#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
bool powerof2(int n)
{
    // Checks if the given number is power of 2
    if(n<0)
        return false;
    return n && !(n & (n-1));
}
int lsbsetbit(int n)
{
    /*
        Finds position of leftmost set bit from lsb
        eg. 20 -> 10100 
        returns 3
    */
    return log2(n & -n) + 1;
}
int main()
{
    int n;
    cin>>n;
    if(powerof2(n))
        cout<<"It is a power of 2\n";
    else
        cout<<"Not a power of 2\n";
    cout<<"Position of rightmost set bit"<<lsbsetbit(n)<<newline
    return 0;
}