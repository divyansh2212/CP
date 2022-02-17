#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        if (l == r)
        {
            if (l != 1)
                cout << "YES\n";
            else
                cout << "NO\n";
            continue;
        }

        int odds, evens;
        if ((l % 2 && r % 2 == 0) || (r % 2 && l % 2 == 0))
        {
            odds = (r - l + 1) / 2;
            evens = odds;
        }
        else if (l % 2 == 0 && r % 2 == 0)
        {
            odds = (r - l) / 2;
            evens = odds + 1;
        }
        else if (l % 2 && r % 2)
        {
            evens = (r - l) / 2;
            odds = evens + 1;
        }

        if (odds <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}