// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int largestCombination(vector<int> &candidates)
    {
        vector<int> points(32, 0);

        for (int i = 0; i < candidates.size(); i++)
        {
            for (int bit = 0; bit < 32; bit++)
                if ((candidates[i] & (1 << bit)) != 0)
                    points[bit]++;
        }

        int ans = 0;
        for (int i = 0; i < 32; i++)
            ans = max(ans, points[i]);

        return ans;
    }
};