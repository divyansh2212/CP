// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int operatons = 0;
        while (1)
        {
            bool flag = false;int minm = inf;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] > 0)
                    flag = true;
                if (nums[i] < minm && nums[i] != 0)
                    minm = nums[i];
            }
            if (flag == false)
                break;
            operatons++;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] > 0)
                    nums[i] -= minm;
            }
        }
        return operatons;
    }
};