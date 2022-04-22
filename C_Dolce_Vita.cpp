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
        ll n, x;
        cin >> n >> x;

        vector<ll> prices(n);
        for (int i = 0; i < n; i++)
            cin >> prices[i];

        sort(prices.begin(), prices.end());

        ll total_sum = accumulate(prices.begin(), prices.end(), 0);

        ll idx = 0, ans = 0;
        while (prices[n - 1] + idx <= x)
        {
            ans += n;
            total_sum += n;
            idx++;
        }

        for (int i = 0; i < n; i++)
        {
            x -= prices[i] + idx;
            if (x < 0)
                break;
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}