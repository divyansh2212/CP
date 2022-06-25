// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return true;

        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                cnt++;
                if (i - 2 < 0)
                    nums[i - 1] = nums[i];
                else if (nums[i - 2] <= nums[i])
                    nums[i - 1] = nums[i];
                else if (nums[i - 2] > nums[i])
                    nums[i] = nums[i - 1];
            }
            if (cnt > 1)
                return false;
        }

        return true;
    }
};