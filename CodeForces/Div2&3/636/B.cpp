#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        vector<int> a(n, 0);
        int nos = n / 2;
        if ((nos) % 2 == 1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            // required sum
            int sum = (nos) * ((nos) + 1);
            int evennos = 2;
            while (nos)
            {
                cout << evennos << " ";
                evennos += 2;
                nos -= 1;
            }
            nos = n/2;
            // Sum of first n odd numbers = n * n
            int lasttoadd = sum - ((nos - 1) * (nos - 1));
            int oddnos = 1;
            while (nos - 1)
            {
                cout << oddnos << " ";
                oddnos += 2;
                nos--;
            }
            cout << lasttoadd << "\n";
        }
    }
    return 0;
}