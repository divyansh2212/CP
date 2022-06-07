// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = m, k = 0; i < m + n, k < n; i++, k++)
            nums1[i] = nums2[k];

        ll gap = m + n;

        while (gap > 1)
        {
            gap = ceil(gap / 2.0);
            for (int i = 0; i < m + n; i++)
            {
                if (i + gap < m + n && nums1[i] > nums1[i + gap])
                    swap(nums1[i], nums1[i + gap]);
            }
        }
    }
};