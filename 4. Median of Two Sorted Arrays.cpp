// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);
        int n1 = nums1.size(), n2 = nums2.size();

        int lo = 0, hi = n1;

        while (lo <= hi)
        {
            int cut1 = lo + (hi - lo) / 2;
            int cut2 = ((n1 + n2 + 1) / 2) - cut1;

            int left1, left2, right1, right2;
            if (cut1 == 0)
                left1 = INT_MIN;
            else
                left1 = nums1[cut1 - 1];
            if (cut2 == 0)
                left2 = INT_MIN;
            else
                left2 = nums2[cut2 - 1];

            if (cut1 == n1)
                right1 = inf;
            else
                right1 = nums1[cut1];
            if (cut2 == n2)
                right2 = inf;
            else
                right2 = nums2[cut2];

            if (left1 <= right2 && left2 <= right1)
            {
                if ((n1 + n2) % 2 == 0)
                    return (max(left1, left2) + min(right1, right2)) / 2.0;
                else
                    return 1.0 * max(left1, left2);
            }

            else if (left1 > right2)
                hi = cut1 - 1;
            else
                lo = cut1 + 1;
        }

        return 0.0;
    }
};