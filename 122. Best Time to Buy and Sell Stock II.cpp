class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0, prev = prices[0], last = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] >= prev && prices[i] >= last)
            {
                last = prices[i];
                continue;
            }

            else
            {
                ans += prices[i - 1] - prev;
                prev = prices[i];
                last = prices[i];
            }
        }
        ans += prices[prices.size() - 1] - prev;
        return ans;
    }
};