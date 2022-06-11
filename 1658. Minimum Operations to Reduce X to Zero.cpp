// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int minOperations(vector<int> &arr, int x)
    {
        unordered_map<int, int> mp;
        int ans = 0;

        int sum = 0;
        int target = accumulate(arr.begin(), arr.end(), 0) - x;

        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if (sum == target)
                ans = max(ans, i + 1);

            else
            {
                if (mp.find(sum - target) != mp.end())
                    ans = max(ans, i - mp[sum]);

                else
                    mp[sum] = i;
            }
        }

        return n - ans;
    }
};