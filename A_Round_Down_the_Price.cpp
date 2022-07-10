// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m;
        cin >> m;

        string s = to_string(m);
        int digits = s.length() - 1;

        ll val = pow(10, digits);

        cout << m - val << endl;
    }
    return 0;
}