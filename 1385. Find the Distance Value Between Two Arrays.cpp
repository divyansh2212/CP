#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int ans = 0;
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        for (int i = 0; i < arr1.size(); i++)
        {
            int lo = 0, hi = arr2.size() - 1, mid;

            while (hi - lo > 1)
            {
                mid = ((hi + lo) / 2);

                if (abs(arr2[mid] - arr1[i]) > d)
                    lo = mid + 1;
                else
                    break;
            }
            ans += arr2.size() - lo;
        }
        return ans;
    }
};