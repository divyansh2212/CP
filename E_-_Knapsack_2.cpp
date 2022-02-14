#include <bits/stdc++.h>
using namespace std;
int n, w;
const int N = 1e5 + 10;
int weights[105], values[105];
int dp[105][N];

int func(int idx, int curr_value, int curr_capacity)
{
    if (curr_capacity == 0)
        return curr_value;

    if (idx < 0)
        return curr_value;

    if (dp[idx][curr_value] != -1)
        return dp[idx][curr_value];

    int ans = func(idx - 1, curr_value, curr_capacity);

    if (curr_capacity - weights[idx] >= 0)
        ans = max(ans, func(idx - 1, curr_value + values[idx], curr_capacity - weights[idx]));

    return dp[idx][curr_value] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    
    cin >> n >> w;

    for (int i = 0; i < n; i++)
        cin >> weights[i] >> values[i];

    cout << func(n - 1, 0, w);

    return 0;
}