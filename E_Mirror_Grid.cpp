// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int zeroes = 0, ones = 0;
            int nowi = i, nowj = j, oldj = j;
            if (grid[nowi][nowj] == '0')
                zeroes++;
            else
                ones++;

            nowj = n - nowi - 1, nowi = oldj;
            if (grid[nowi][nowj] == '0')
                zeroes++;
            else
                ones++;
            oldj = nowj;

            nowj = n - nowi - 1, nowi = oldj;
            if (grid[nowi][nowj] == '0')
                zeroes++;
            else
                ones++;
            oldj = nowj;

            nowj = n - nowi - 1, nowi = oldj;
            if (grid[nowi][nowj] == '0')
                zeroes++;
            else
                ones++;
            oldj = nowj;

            ans += min(ones, zeroes);
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}