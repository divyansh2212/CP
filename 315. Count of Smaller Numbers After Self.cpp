// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    void merge(vector<pair<int, int>> &nums, int s, int e, vector<int> &ans)
    {
        int mid = s + ((e - s) / 2);
        vector<pair<int, int>> temp(e - s + 1);

        int i = s, j = mid + 1, k = 0;

        while (i <= mid && j <= e)
        {
            if (nums[i].first <= nums[j].first)
                temp[k++] = nums[j++];
            else
            {
                ans[nums[i].second] += e - j + 1;
                temp[k++] = nums[i++];
            }
        }

        while (i <= mid)
            temp[k++] = nums[i++];
        while (j <= e)
            temp[k++] = nums[j++];

        for (i = s; i <= e; i++)
            nums[i] = temp[i - s];
    }

    void mergeSort(vector<pair<int, int>> &nums, int s, int e, vector<int> &ans)
    {
        if (s < e)
        {
            int mid = s + ((e - s) / 2);
            mergeSort(nums, s, mid, ans);
            mergeSort(nums, mid + 1, e, ans);

            merge(nums, s, e, ans);
        }
    }

public:
    vector<int> countSmaller(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 0);

        vector<pair<int, int>> numarr(n);
        for (int i = 0; i < n; i++)
            numarr[i] = {nums[i], i};

        mergeSort(numarr, 0, n - 1, ans);
        return ans;
    }
};