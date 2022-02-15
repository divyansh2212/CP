#include <bits/stdc++.h>
using namespace std;
int dp[50];

int helper(int curr, int n)
{
    if (curr == n)
        return 1;
    if (curr > n)
        return 0;
    if (dp[curr] != -1)
        return dp[curr];

    int ways = helper(curr + 1, n);
    ways += helper(curr + 2, n);

    return dp[curr] = ways;
}

int climbStairs(int n)
{
    memset(dp, -1, sizeof(dp));
    return helper(0, n);
}