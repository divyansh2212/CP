// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int countDistinctIntegers(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            string num = to_string(nums[i]);
            reverse(num.begin(), num.end());
            int new_num = stoi(num);
            nums.push_back(new_num);
        }
        set<int> st;
        for (int i = 0; i < nums.size(); i++)
            st.insert(nums[i]);
        return st.size();
    }
};