// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int f(int n, vector<int> &dp)
{
    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    int copy = n;
    vector<int> digits;
    while (copy > 0)
    {
        int num = (copy % 10);
        copy /= 10;
        digits.push_back(num);
    }

    int ways = INT_MAX;
    for (int i = 0; i < digits.size(); i++)
    {
        if (digits[i] == 0)
            continue;
        ways = min(ways, 1 + f(n - digits[i], dp));
    }
    return dp[n] = ways;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << f(n, dp);
}
int main()
{
    solve();
    return 0;
}