// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int unequalTriplets(vector<int> &nums)
    {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (nums[i] != nums[j] && nums[j] != nums[k] && nums[k] != nums[i])
                        count++;
                }
            }
        }
        return count;
    }
};