// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int lo = 1, hi = arr.size() - 2, mid;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;

            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                return mid;

            if (arr[mid] < arr[mid - 1])
                hi = mid - 1;

            else
                lo = mid + 1;
        }
        return lo;
    }
};