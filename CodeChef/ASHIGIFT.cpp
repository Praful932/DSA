#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define nl "\n";
#define loop(from,to) for(ll i=from;i<to;i++)
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define fastio \
    ios::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);

vector<pair<ll, pair<ll, ll>>> a;
ll f(ll no_of_people)
{
    // function to check if the current number of people are able to get through the cakes and reach byteland
    ll i = 0;

    while(a[i].second.first != -200)
    {
        if(a[i].second.second == -100)
        {
            // dish
            no_of_people -= a[i].second.first;
        }
        else
        {
            // tribal
            if(no_of_people >= a[i].second.second)
            {
                no_of_people += a[i].second.first;
            }
        }     
        i++;   
    }
    return no_of_people;
}
ll lb(ll low, ll high, ll k)
{
    /*
        low - 1 (possibilty only 1 person reqd to make it to byteland)
        high - as many as people needed to make it to byteland
        k - atleast 1 person should be able to make it
    */
    //
    ll ans = high;
    // lower bound over f
    while(low <= high)
    {
        ll mid = low + ((high - low) / 2);
        
        if(f(mid) >= k)
        {
            // possible there is a better solution
            high = mid - 1;
            ans = min(ans, mid);
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{   
    OJ;
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        // find minimum size of group such that atleast 1 will reach the end
        // monotonic function, continuously increasing
        /*
            If total x people go and atleast 1 can reach end, then x + 1 will defenitly satisfy
        */
        // x - distance of byteland
        ll x;
        cin >> x;

        // b - number of dishes
        ll b;
        cin >> b;
        
        // dish distance, people to finish -> -100
        ll dist, population;
        loop(0,b)
        {
            cin >> dist >> population;
            a.push_back({dist, {population, -100}});
        }   

        ll c;
        cin >> c;
        ll peoplreqd;

        // tribal distance, population, to join gang

        loop(0, c)
        {
            cin >> dist >> peoplreqd >> population;
            a.push_back({dist, {population, peoplreqd}});
        }
        // distance of byteland
        a.push_back({x, {-200, -200}});
        sort(a.begin(), a.end());
        cout<< lb(1, 1e19, 1 )<< nl;
    }
    return 0;
}

