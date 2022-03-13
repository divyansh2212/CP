#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int n = arr.size();
        int lo = 1, hi = n - 1, mid;

        while (hi - lo > 1)
        {
            mid = (hi + lo) / 2;
            if (arr[mid] < arr[mid + 1])
                lo = mid + 1;
            else
                hi = mid;
        }
        if (lo - 1 <= 0)
            if (arr[lo - 1] > arr[lo])
                return lo - 1;
        if (lo + 1 < n)
            if (arr[lo] > arr[lo + 1])
                return lo;
        if (hi - 1 <= 0)
            if (arr[hi - 1] > arr[hi])
                return hi - 1;
        if (hi + 1 < n)
            if (arr[hi] > arr[hi + 1])
                return hi;
        return 0;
    }
};