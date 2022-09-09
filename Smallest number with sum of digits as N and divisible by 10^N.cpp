// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    string digitsNum(int N)
    {
        string s = "";
        vector<int> nums;

        int n = N;

        while (n > 0)
        {
            if (n >= 9)
                nums.push_back(9), n -= 9;
            else
                nums.push_back(n), n = 0;
        }

        for (int i = nums.size() - 1; i >= 0; i--)
            s += to_string(nums[i]);
        
        for (int i = 0; i < N; i++)
            s += "0";
        return s;
    }
};