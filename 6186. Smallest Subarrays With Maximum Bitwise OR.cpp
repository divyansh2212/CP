// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    vector<int> smallestSubarrays(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 1);

        // int i = 0, j = 0, currOr = 0, maxOr = 0;

        // while (i < n)
        // {
        //     if (j == n)
        //         i++, j = i, currOr = 0, maxOr = 0;
        //     if (i == n)
        //         break;
        //     currOr = (currOr | nums[j]);
        //     if (currOr > maxOr)
        //     {
        //         ans[i] = j - i + 1;
        //         maxOr = currOr;
        //     }
        //     j++;
        // }

        int i = 0, j = 0, maxOr = 0, currOr = 0, currMaxOr = 0;
        vector<int> hsh(32, 0);
        for (i = 0; i < n; i++)
            maxOr = (maxOr | nums[i]);

        i = 0;

        while (i < n)
        {
            currOr = (currOr | nums[j]);
            // for (int k = 0; k < 32; k++)
            //     if ((nums[j] & (1 << k)) != 0)
            //         hsh[k]++;

            if (currOr == maxOr)
            {
                // for (int k = 0; k < 32; k++)
                //     if ((nums[j] & (1 << k)) != 0)
                //         hsh[k]++;
                ans[i] = j - i + 1;
                j = i;
                i++, currMaxOr = 0, currOr = 0;
            }
            else if (currOr > currMaxOr)
            {
                ans[i] = j - i + 1;
                currMaxOr = currOr;
            }
            if (j == n - 1)
            {
                j = i;
                i++, currMaxOr = 0, currOr = 0;
            }

            j++;
        }

        return ans;
    }
};