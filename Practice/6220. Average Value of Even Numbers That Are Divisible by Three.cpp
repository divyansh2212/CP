// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int cnt = 0, sum = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] % 3 == 0 && nums[i] % 2 == 0)
                cnt++, sum += nums[i];
        if (cnt)
            return sum / cnt;
        return 0;
    }
};