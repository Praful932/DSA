#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
bool cmp1(pair<int, int> &a,pair<int, int> &b)
{
    // Ascending
    // keep portal first
    if(a.first < b.first)
        return true;
    else if(a.first > b.first)
        return false;
    else   
        if(b.second == 0)
            return false;
    return true;
}
bool cmp2(pair<int, int> &a, pair<int,int> &b)
{
    // Descending
    // keep portal first
    if(a.first < b.first)
        return false;
    else if(a.first > b.first)
        return true;
    else 
        if(b.second == 0)
            return false;
    return true;
}
int main()
{
    OJ;
    int n,x,y;
    cin>>n>>x>>y;
    // time, type 477133
    // type 0 = portal time
    // type > 0 - contest time
    vector<pair<int,int>> start,end;

    vector<pair<int,int>> answers(n + 1, {-1,-1});

    // start and end time of n contests
    int s, e;
    loop(0,n)
    {  
        cin >> s >> e;
        start.push_back({s, i+1});
        end.push_back({e, i+1});
    }
    // v wormhole - entry
    loop(0,x)
    {
        cin>>s;
        start.push_back({s, 0});
    }
    // w wormhole - exit
    loop(0,y)
    {
        cin>>e;
        end.push_back({e, 0});
    }
    sort(start.begin(), start.end(), cmp1);
    sort(end.begin(), end.end(), cmp2);

    int type = 0;
    int maxportal = -1;
    loop(0,start.size())
    {
        s = start[i].first;
        type = start[i].second;
        if(type > 0)
        {
            // round start
            answers[type].first = maxportal;
        }
        else
        {
            // entry portal
            maxportal = max(maxportal, s);
        }
    }

    int minportal = INT_MAX;
    loop(0, end.size())
    {
        s = end[i].first;
        type = end[i].second;
        if(type > 0)
        {
            // round finish
            answers[type].second = minportal;
        }
        else
        {
            // exit portal
            minportal = min(minportal, s);
        }
    }
    int mincontest = INT_MAX;
    loop(1, answers.size())
    {
        s = answers[i].first;
        e = answers[i].second;
        if(s != -1 or e != -1)
            mincontest = min(mincontest, abs(e - s + 1));
    }
    cout<<mincontest<<newline
    
    return 0;
}