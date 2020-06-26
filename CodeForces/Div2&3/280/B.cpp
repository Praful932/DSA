#include <bits/stdc++.h>
using namespace std;
#define newline "\n";
#define loop(from, to) for (int i = from; i < to; i++)
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
template <class datatype>
void print(datatype a)
{
    cout << a << " ";
}

template <class datatype>
void println(datatype a)
{
    cout << a << "\n";
}

int main()
{
    OJ;
    double t;
    double n, l;
    cin >> n >> l;
    double dist;
    double maxdist = 0;
    vector<double> a(n, 0);
    loop(0, n)
        cin >>a[i];
    sort(a.begin(), a.end());
    loop(0, n - 1)
    {
        dist = abs(a[i] - a[i + 1]);
        maxdist = max(dist, maxdist);
    }
    maxdist=maxdist/2;
    maxdist = max(maxdist, abs(a[0] - 0));
    maxdist = max(maxdist, abs(a[n - 1] - l));
    cout <<fixed << setprecision(10) << maxdist;
    return 0;
}