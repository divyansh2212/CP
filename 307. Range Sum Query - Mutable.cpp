// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class NumArray
{
    vector<int> seg;
    int n;

    int build(vector<int> &nums, int start, int end, int idx)
    {
        int middle = (start + end) / 2;
        if (start == end)
            return seg[idx] = nums[start];

        int leftSum = build(nums, start, middle, (2 * idx) + 1);
        int rightSum = build(nums, middle + 1, end, (2 * idx) + 2);

        return seg[idx] = leftSum + rightSum;
    }

    int update(int &index, int &val, int start, int end, int idx)
    {
        if (index > end || index < start)
            return seg[idx];
        if (start == end)
            return seg[idx] = val;

        int mid = (start + end) / 2;
        int leftSum = update(index, val, start, mid, (2 * idx) + 1);
        int rightSum = update(index, val, mid + 1, end, (2 * idx) + 2);

        return seg[idx] = leftSum + rightSum;
    }

    int sumRange(int left, int right, int start, int end, int idx)
    {
        if (left > end || right < start)
            return 0;

        if (left <= start && right >= end)
            return seg[idx];

        int mid = (start + end) / 2;

        int leftSum = sumRange(left, right, start, mid, (2 * idx) + 1);
        int rightSum = sumRange(left, right, mid + 1, end, (2 * idx) + 2);

        return leftSum + rightSum;
    }

public:
    NumArray(vector<int> &nums)
    {
        n = nums.size();
        seg.resize(4 * n);
        build(nums, 0, n - 1, 0);
    }

    void update(int index, int val)
    {
        update(index, val, 0, n - 1, 0);
    }

    int sumRange(int left, int right)
    {
        return sumRange(left, right, 0, n - 1, 0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */