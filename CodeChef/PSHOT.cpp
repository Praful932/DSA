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
        /*
            on each iteration check if each of the players can win or not, from their scores
            and from what they need to score against opponent,if they can't, that iteration is the round.
        */
        int n;
        cin >> n;
        vector<int> a(2*n);
        string s;
        int goal1 = 0,goal2 = 0;
        cin >> s;
        for(int i=0;i<2*n;i++)
        {
            a[i] = s[i] - '0';
            if(i & 1)
                goal2 += a[i];
            else
                goal1 += a[i];
        }
        int goalsA = 0;
        int goalsB = 0;
        int resultround = 2*n;
        int roundsremainingA = n;
        int roundsremainingB = n;
        loop(0,2*n)
        {
            if(i & 1)
            {
                // B's round
                // add goal
                goalsB += a[i];
                roundsremainingB--;

                if((goalsA - goalsB) > roundsremainingB || (goalsB - goalsA) > roundsremainingA)
                {
                    // cout<<i<<" "<< goalsB<<" "<<roundsremainingB<<newline
                    resultround = i + 1;
                    break;
                }
            }   
            else
            {
                // A's round
                // add A goal
                goalsA += a[i];
                roundsremainingA--;
                if((goalsB - goalsA) > roundsremainingA || (goalsA - goalsB) > roundsremainingB)
                {
                    resultround = i+1;
                    break;
                }
            }
        }
        // cout<<goal1<<" "<<goal2<<newline
        if(goal1==goal2)
            cout<<2*n<<newline
        else
            cout<<resultround<<newline
    }
    return 0;
}