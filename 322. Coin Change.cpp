// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        int n = coins.size();
        vector<ll> prev(amount + 1, 0);

        for (ll amt = 0; amt <= amount; amt++)
        {
            if (amt % coins[0] == 0)
                prev[amt] = amt / coins[0];
            else
                prev[amt] = 1e9;
        }

        for (ll idx = 1; idx < n; idx++)
        {
            vector<ll> curr(amount + 1, 0);
            for (ll amt = 1; amt <= amount; amt++)
            {
                ll way1 = 1e9, way2 = 1e9;

                // take
                if (coins[idx] <= amt)
                    way1 = 1 + curr[amt - coins[idx]];

                // not take
                way2 = prev[amt];

                curr[amt] = min(way1, way2);
            }
            prev = curr;
        }

        if (prev[amount] >= 1e9)
            return -1;

        return (int)prev[amount];
    }
};