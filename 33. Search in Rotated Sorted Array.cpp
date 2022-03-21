#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        // Finding pivot
        int s = 0, e = nums.size() - 1, mid;

        while (s < e)
        {
            mid = s + (e - s) / 2;

            if (nums[mid] >= arr[0])
                s = mid + 1;
            else
                e = mid;
        }

        int pivot = s;

        if (nums[pivot] == target)
            return pivot;

        s = 0, e = pivot - 1;
        while (s <= e)
        {
            mid = s + (e - s) / 2;

            if (nums[mid] == target)
                return mid;
            if (nums[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;
        }

        s = pivot, e = nums.size() - 1;
        while (s <= e)
        {
            mid = s + (e - s) / 2;

            if (nums[mid] == target)
                return mid;
            if (nums[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return -1;
    }
};