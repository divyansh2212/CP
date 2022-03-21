#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int s = 0, e = nums.size() - 1, mid;

        while (s < e)
        {
            mid = s + (e - s) / 2;

            if (nums[mid] >= nums[0])
                s = mid + 1;
            else
                e = mid;
        }
        return e;
    }
};