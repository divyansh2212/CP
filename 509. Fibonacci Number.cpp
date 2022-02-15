#include <bits/stdc++.h>
using namespace std;
int dp[1000];

int fibnocaai(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    int last = fibnocaai(n - 1);
    int scndlast = fibnocaai(n - 2);
    return dp[n] = last + scndlast;
}

int fib(int n)
{
    memset(dp, -1, sizeof(dp));
    return fibnocaai(n);
}