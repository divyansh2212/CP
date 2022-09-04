// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int longestNiceSubarray(vector<int> &nums)
    {
        int n = nums.size(), i = 0, j = 1, ans = 1;
        deque<int> currEle;
        currEle.push_back(nums[0]);

        while (j < n)
        {
            bool flag = true;
            int cnt = 0, lastele = -1;
            for (auto &it : currEle)
            {
                cnt++;
                if ((it & nums[j]))
                {
                    flag = false, lastele = cnt;
                }
            }

            if (flag)
            {
                currEle.push_back(nums[j]);
                ans = max(ans, j - i + 1);
            }
            else
            {
                while (lastele > 0)
                {
                    currEle.pop_front();
                    i++, lastele--;
                }
            }
            j++;
        }
        return ans;
    }
};