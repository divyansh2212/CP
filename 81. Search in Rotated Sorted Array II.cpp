// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int s = 0, e = n - 1, mid;

        while (s <= e)
        {

            while (s + 1 < n && nums[s + 1] == nums[s])
                s++;
            while (e - 1 >= 0 && nums[e - 1] == nums[e])
                e--;

            mid = e + (s - e) / 2;
            if (nums[mid] == target)
                return true;

            if (nums[s] <= nums[mid])
            {
                if (nums[s] <= target && target <= nums[mid])
                    e = mid - 1;
                else
                    s = mid + 1;
            }
            else
            {
                if (nums[mid] <= target && target <= nums[e])
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }
        return false;
    }
};