// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    ll minSumSquareDiff(vector<int> &nums1, vector<int> &nums2, int k1, int k2)
    {
        vector<int> absDiff[100000 + 1];

        int maxDiff = INT_MIN;
        for (int i = 0; i < nums1.size(); i++)
        {
            int diff = abs(nums1[i] - nums2[i]);
            maxDiff = max(maxDiff, diff);
            absDiff[diff].push_back(i);
        }

        while (k1 > 0 && k2 > 0)
        {
            for (int i = maxDiff; i > 0; i--)
            {
                for (int j = 0; j < absDiff[i].size(); j++)
                {
                    int idx = absDiff[i][j];

                    if (k1)
                    {
                        if (nums1[idx] > nums2[idx])
                            nums1[idx]--;
                        else
                            nums1[idx]++;
                        k1--;
                    }
                    else if (k2)
                    {
                        if (nums2[idx] > nums1[idx])
                            nums2[idx]--;
                        else
                            nums2[idx]++;
                        k2--;
                    }
                    else
                        break;
                }
            }
        }

        ll ans = 0;
        for (int i = 0; i < nums1.size(); i++)
            ans += (nums1[i] - nums2[i]) * 1LL * (nums1[i] - nums2[i]);

        return ans;
    }
};