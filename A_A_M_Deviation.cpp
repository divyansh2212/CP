#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        ll lhs = a1 + a3, rhs = 2 * a2;
        ll ans= abs(lhs - rhs);

        while (/* condition */)
        {
            /* code */
        }
        


        cout << ans << endl;
    }
    return 0;
}