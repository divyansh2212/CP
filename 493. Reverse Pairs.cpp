// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    void merge(vector<int> &nums, int s, int e, int &ans)
    {
        int mid = s + ((e - s) / 2);

        vector<int> temp(e - s + 1);

        int i = s, j = mid + 1, mainIdx = 0;

        while (i <= mid && j <= e)
        {
            if (nums[i] < nums[j])
                temp[mainIdx++] = nums[j++];

            else
                temp[mainIdx++] = nums[i++];
        }

        while (i <= mid)
            temp[mainIdx++] = nums[i++];
        while (j <= e)
            temp[mainIdx++] = nums[j++];

        i = s, j = mid + 1;
        while (i <= mid && j <= e)
        {
            if (nums[i] > 2LL * nums[j])
                ans += e - j + 1, i++;
            else
                j++;
        }

        for (i = s; i <= e; i++)
            nums[i] = temp[i - s];
    }
    void mergeSort(vector<int> &nums, int s, int e, int &ans)
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
    int reversePairs(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        mergeSort(nums, 0, n - 1, ans);
        return ans;
    }
};