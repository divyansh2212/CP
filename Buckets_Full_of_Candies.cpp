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
        ll n, m, l;
        cin >> n >> m >> l;

        if (n == 0)
        {
            cout << m << endl;
            continue;
        }
        if (m == 0)
        {
            cout << 0 << endl;
            continue;
        }

        ll no_bckts_to_n = n + l - 1;
        m = m % no_bckts_to_n;
        if (m >= l)
            m = 0;

        cout << m << endl;
    }
    return 0;
}