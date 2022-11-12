// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        set<double> st;
        int n = nums.size();
        int i = 0, j = n - 1;
        sort(nums.begin(), nums.end());
        while (i < j)
        {
            double avg = (nums[i] + nums[j]) / 2.0;
            st.insert(avg);
            i++, j--;
        }
        return st.size();
    }
};