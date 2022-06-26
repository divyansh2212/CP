// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        vector<int> prefixForward(n + 1, 0);
        for (int i = 1; i < n + 1; i++)
            prefixForward[i] = prefixForward[i - 1] + cardPoints[i - 1];

        vector<int> prefixBackward(n + 1, 0);
        int curr_idx = n - 1;
        for (int i = 1; i < n + 1; i++)
        {
            prefixBackward[i] = prefixBackward[i - 1] + cardPoints[curr_idx];
            curr_idx--;
        }

        int ans = 0;
        for (int i = 0; i <= k; i++)
        {
            ans = max(ans, prefixBackward[i] + prefixForward[k - i]);
            ans = max(ans, prefixBackward[k - i] + prefixForward[i]);
        }
        return ans;
    }
};