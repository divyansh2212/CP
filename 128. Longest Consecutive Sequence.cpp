// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
            m[nums[i]] = 1;

        int curr = 0, ans = 0, lastele = -1, i = 0;

        for (auto &it : m)
        {
            if (it.first - lastele == 1 || i == 0)
                curr++;
            else
                curr = 1;

            lastele = it.first;
            ans = max(ans, curr);
            i++;
        }

        return ans;
    }
};