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
        ll n, k;
        cin >> n >> k;

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        ll curr = n - 1, to_sub = 1, ans = 0;

        while (curr > 0)
        {
            curr -= to_sub;
            ans++;
            if (curr <= 0)
                break;
            to_sub = min(k, to_sub * 2);
            if (to_sub == k)
            {
                ans += curr / to_sub;
                if (curr % to_sub)
                    ans++;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}