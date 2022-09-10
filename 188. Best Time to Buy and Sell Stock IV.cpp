// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int maxProfit(int k, vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<int>> next(2, vector<int>(k + 1, 0));

        for (int idx = n - 1; idx >= 0; idx--)
        {
            vector<vector<int>> curr(2, vector<int>(k + 1, 0));
            for (int canBuy = 0; canBuy < 2; canBuy++)
            {
                for (int transactions = 1; transactions < k + 1; transactions++)
                {
                    int maxProfit = 0;
                    if (canBuy)
                    {
                        maxProfit = -prices[idx] + next[false][transactions];
                        maxProfit = max(maxProfit, next[canBuy][transactions]);
                    }
                    else
                    {
                        maxProfit = prices[idx] + next[true][transactions - 1];
                        maxProfit = max(maxProfit, next[canBuy][transactions]);
                    }
                    curr[canBuy][transactions] = maxProfit;
                }
            }
            next = curr;
        }

        return next[1][k];
    }
};