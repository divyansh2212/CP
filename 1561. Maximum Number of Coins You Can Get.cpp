// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.begin(), piles.end());

        int ans = 0, coins = (piles.size()) / 3;
        for (int i = piles.size() - 2; i >= 0 && coins > 0; i -= 2, coins--)
            ans += piles[i];
        
        return ans;
    }
};