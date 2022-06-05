// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int partitionArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int ans = 0, i = 0;
        while (i < n)
        {
            int lo = i + 1, hi = n - 1, mid;
            int idx = -1;
            while (lo <= hi)
            {
                mid = lo + ((hi - lo) / 2);

                if (nums[mid] <= nums[i] + k)
                    lo = mid + 1, idx = mid;
                else
                    hi = mid - 1;
            }

            if (idx != -1)
                i = idx + 1;
            else
                i++;
            ans++;
        }

        return ans;
    }
};