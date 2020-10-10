#include <bits/stdc++.h>
#define ll long long
#define newline "\n";
#define loop(from,to) for(int i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

using namespace std;
bool cmp(pair<string,int> &A, pair<string, int> &B)
{
    if(A.second > B.second)
        return true;
    else if(A.second < B.second)
        return false;
    else
        if(A.first < B.first)
            return true;
    return false;
}
int main()
{
    OJ;
    // n - no of chefs, m - no of emails
    int n,m;
    cin >> n >> m;
    map<string,string> chefwhichcountry;
    map<string,int> countryvotes, chefvotes;

    vector<pair<string,int>> countryvotes_v, chefvotes_v;

    string chef, country;
    loop(0,n)
    {
        cin >> chef >> country;
        chefwhichcountry[chef] = country;
    }

    // votes
    loop(0,m)
    {
        cin >> chef;
        country = chefwhichcountry[chef];
        countryvotes[country]++;
        chefvotes[chef]++;
    }

    for(auto& it: countryvotes)
        countryvotes_v.push_back(it);
    
    for(auto& it: chefvotes)
        chefvotes_v.push_back(it);
    
    sort(countryvotes_v.begin(), countryvotes_v.end(), cmp);
    sort(chefvotes_v.begin(), chefvotes_v.end(), cmp);

    cout<<countryvotes_v[0].first<<newline
    cout<<chefvotes_v[0].first<<newline
    return 0;   
}