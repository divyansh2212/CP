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
        ll x;
        cin >> x;

        if (x == 1)
            cout << 3 << endl;

        else if ((x & (x - 1)) == 0)
            cout << x + 1 << endl;

        else
        {
            int lowbit = -1;
            for (int i = 0; i < 32; i++)
            {
                if (x & (1 << i))
                {
                    lowbit = i;
                    break;
                }
            }

            ll ans = (1 << lowbit);
            cout << ans << endl;
        }
    }
    return 0;
}