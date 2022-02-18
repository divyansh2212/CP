#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> prices(n);
        for (ll i = 0; i < n; i++)
            cin >> prices[i];

        sort(prices.begin(), prices.end(), greater<ll>());

        ll profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            prices[i] = prices[i] - i;
            if (prices[i] < 0)
                prices[i] = 0;
            profit += prices[i];
        }

        cout << profit % M << endl;
    }
    return 0;
}