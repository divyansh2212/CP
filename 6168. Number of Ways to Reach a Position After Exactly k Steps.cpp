// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    int generateWays(int idx, int &endPos, int k, vector<vector<int>> &posDP, vector<vector<int>> &negDP)
    {
        if (k == 0)
            return (idx == endPos);

        if (idx < 0 && negDP[-1 * idx][k] != -1)
            return negDP[-1 * idx][k];
        else if (posDP[idx][k] != -1)
            return posDP[idx][k];

        // to the right
        ll way1 = generateWays(idx + 1, endPos, k - 1, posDP, negDP);

        // left
        ll way2 = generateWays(idx - 1, endPos, k - 1, posDP, negDP);

        if (idx < 0)
            negDP[-1 * idx][k] = (way1 + way2) % mod;
        else
            posDP[idx][k] = (way1 + way2) % mod;
    }

public:
    int numberOfWays(int startPos, int endPos, int k)
    {
        vector<vector<int>> posDP(2000, vector<int>(k + 1, -1));
        vector<vector<int>> negDP(2000, vector<int>(k + 1, -1));
        int ans = generateWays(startPos, endPos, k, posDP, negDP);
        return ans;
    }
};