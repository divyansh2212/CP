// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int f(vector<int> &arr, int idx, int target, vector<vector<int>> &dp)
{
    if (target == 0)
        return 0;

    if (idx < 0)
        return 1e8;

    if (dp[idx][target] != -1)
        return dp[idx][target];

    int take = 1e8, notTake = 1e8;

    if (target >= arr[idx])
        take = 1 + f(arr, idx, target - arr[idx], dp);

    notTake = f(arr, idx - 1, target, dp);

    return dp[idx][target] = min(take, notTake);
}

class Solution
{
public:
    int minimumNumbers(int num, int k)
    {
        if (num == 0)
            return 0;

        int n = k;

        if (n == 0)
            n += 10;

        vector<int> arr(0);
        while (n <= num)
        {
            arr.push_back(n);
            n += 10;
        }

        n = arr.size();
        if (n == 0)
            return -1;
        vector<vector<int>> dp(n, vector<int>(num + 1, -1));

        int ans = f(arr, n - 1, num, dp);

        if (ans >= 1e8)
            ans = -1;

        return ans;
    }
};