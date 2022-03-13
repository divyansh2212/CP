#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

class Solution
{
public:
    ll func(vector<int> &arr, int idx, int curr, vector<int> &dp)
    {
        if (idx == 0)
        {
            if (((curr + arr[idx]) % 2) && (curr % 2))
                return 2;
            if ((curr + arr[0]) % 2)
                return 1;
            if (curr % 2)
                return 1;
            return -1e17;
        }
        if (dp[idx] != -1)
            return dp[idx];
        ll notTake = -1e17;
        if (curr == 0)
            notTake = func(arr, idx - 1, curr, dp);
        ll take = func(arr, idx - 1, curr + arr[idx], dp);

        if (take < 0)
            take = 0;
        if (notTake < 0)
            notTake = 0;
        if (curr % 2)
            take++;
        return dp[idx] = (take + notTake) % M;
    }

    int numOfSubarrays(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> dp(n, vector);
        int ans = func(arr, n - 1, 0, dp);
        if (ans < 0)
            ans = 0;
        return ans;
    }
};
