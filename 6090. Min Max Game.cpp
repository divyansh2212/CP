// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int minMaxGame(vector<int> &nums)
    {
        while (nums.size() != 1)
        {
            int bits = log2(nums.size()) - 1;
            vector<int> new_nums((1 << bits), 0);

            for (int i = 0; i < new_nums.size(); i++)
            {
                if (i % 2)
                    new_nums[i] = max(nums[2 * i], nums[2 * i + 1]);
                else
                    new_nums[i] = min(nums[2 * i], nums[2 * i + 1]);
            }
            nums = new_nums;
        }

        return nums[0];
    }
};