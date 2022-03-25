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
        vector<ll> values(4);

        for (int i = 0; i < 4; i++)
            cin >> values[i];
        ll A, B, C, D;
        sort(values.begin(), values.end());

        if (values[0] < 0)
            B = values[0], A = values[2], C = values[3], D = values[1];
        else
            C = values[3], A = values[2], B = values[1], D = values[0];

        ll x = (A * A) - (2 * C), y = (B * B) + (2 * C);

        if (x != y)
            cout << "-1 -1" << endl;
        else
        {
            ll a = (A + B) / 2;
            ll b = A - a;
            if ((A + B) % 2 || (a * b) != C || b <= 0 || a <= 0 || a > 1e4 || b > 1e4)
                cout << "-1 -1" << endl;
            else if (a / b != D)
                cout << "-1 -1" << endl;
            else
                cout << a << " " << b << endl;
        }
    }
    return 0;
}