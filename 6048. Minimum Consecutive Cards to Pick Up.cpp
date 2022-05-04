// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int minimumCardPickup(vector<int> &cards)
    {
        vector<int> hsh(1e6 + 1, -1);

        int ans = INT_MAX;
        for (int i = 0; i < cards.size(); i++)
        {
            if (hsh[cards[i]] != -1)
            {
                ans = min(ans, i - hsh[cards[i]] + 1);
                hsh[cards[i]] = i;
            }
            else
                hsh[cards[i]] = i;
        }

        if (ans == INT_MAX)
            return -1;
        else
            return ans;
    }
};