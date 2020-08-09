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
        int n;
        cin >> n;
        string origin;
        cin >> origin;
        // for each activity
        int score = 0;
        while (n--)
        {
            string activity;
            cin>> activity;
            int points = 0;
            if(activity == "CONTEST_WON")
            {
                cin >> points;
                if(points > 20)
                    score += 300;
                else
                    score += 300 + (20 - points);
            }
            else if(activity == "TOP_CONTRIBUTOR")
            {
                score += 300;
            }
            else if(activity == "BUG_FOUND")
            {
                cin >> points;
                score += points;
            }
            else if(activity == "CONTEST_HOSTED")
            {
                score += 50;
            }
        }
        if(origin == "INDIAN")
        {
            cout<<score/200<<newline
        }
        else
        {
            cout<<score/400<<newline
        }
    }
    return 0;
}