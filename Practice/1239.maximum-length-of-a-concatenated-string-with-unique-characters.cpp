/*
 * @lc app=leetcode id=1239 lang=cpp
 *
 * [1239] Maximum Length of a Concatenated String with Unique Characters
 */
// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;
// @lc code=start
class Solution
{
    int maxm(int idx, vector<string> &arr, set<char> st)
    {
        if (idx == arr.size())
            return 0;

        int take = 0, notTake = 0;
        notTake = maxm(idx + 1, arr, st);

        bool flag = true;
        sort(arr[idx].begin(), arr[idx].end());
        for (int i = 1; i < arr[idx].length() && flag; i++)
            if (arr[idx][i] == arr[idx][i - 1])
                flag = false;

        for (int i = 0; i < arr[idx].length() && flag; i++)
            if (st.find(arr[idx][i]) != st.end())
                flag = false;

        if (flag)
        {
            for (int i = 0; i < arr[idx].length(); i++)
                st.insert(arr[idx][i]);
            take = arr[idx].length() + maxm(idx + 1, arr, st);
        }

        return max(notTake, take);
    }

public:
    int maxLength(vector<string> &arr)
    {
        set<char> st;
        return maxm(0, arr, st);
    }
};
// @lc code=end
