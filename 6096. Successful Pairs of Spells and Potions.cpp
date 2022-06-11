// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        vector<int> ans(spells.size(), 0);
        sort(potions.begin(), potions.end());

        for (int i = 0; i < spells.size(); i++)
        {
            ll curr = spells[i];
            int lo = 0, hi = potions.size() - 1, mid, idx = -1;
            while (lo <= hi)
            {
                mid = lo + ((hi - lo) / 2);
                if ((curr * potions[mid]) >= success)
                {
                    hi = mid - 1;
                    idx = mid;
                }
                else
                    lo = mid + 1;
            }
            if(idx != -1)
                ans[i] = potions.size() - idx;
        }

        return ans;
    }
};

//   1  2  3  4  5