#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
int main()
{
    OJ;
    int t;
    int taxi = 0;
    map<int, int> freq;
    int n, sum = 0;
    cin >> n;
    vector<int> a(n, 0);
    loop(0, n)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    taxi = freq[4];
    freq[4] = 0;
    if(freq[3])
    {
        if(freq[1])
        {
            if(freq[1]<=freq[3])
            {
                taxi += freq[1];
                freq[3] -= freq[1];
                freq[1] = 0;
            }
            else
            {
                taxi +=freq[3];
                freq[1] -= freq[3];
                freq[3] -= freq[3];
            }
        }
        else
        {
            // Only 3
            taxi += freq[3];
            freq[3] = 0;
        }
    }
    if(freq[3])
    {    taxi += freq[3];
        freq[3]=0;
    }
    if(freq[1])
    {
        taxi += freq[1]/4;
        freq[1] = freq[1] % 4;
    }
    if(freq[2])
    {
        taxi += (freq[2]*2)/4; 
        // 10/4= 2
        // 6/4=1 3
        // 3 - 
        if((freq[2]*2)/4)
        {
            if(freq[2]%4==0)
                freq[2] = 0;
            else
                freq[2] = (freq[2]) - ((freq[2]*2)/4 * 2);
        }
    }
    // 1 1 2
    if(freq[2])
    {
        if(freq[1]>=freq[2])
        {
            // 1 - twoṇ
            // 1,2,3 - ones
            taxi += freq[2];
            if(freq[1]<3)
                freq[1] = 0;
            else if(freq[1]==3)
                freq[1] = 1;
            freq[2]=0;
        }
        else
        {
            taxi++;
        }
    }
    

    if(freq[1]>=4)
        taxi += (freq[1]%4) +1;
    else if(freq[1])
        taxi++;
        
    
    cout<<taxi<<newline;
    return 0;
}