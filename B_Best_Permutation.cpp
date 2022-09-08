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

    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++)
        ans[i] = i;

    if (n % 2 == 0)
    {
        if (n > 2)
            reverse(ans.begin() + 1, ans.begin() + n - 1);
        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << endl;

        return;
    }
    else
    {
        if (n == 3)
        {
            cout << 2 << " " << 1 << " " << 3 << endl;
            return;
        }
        if (n == 5)
        {
            cout << 1 << " " << 2 << " " << 3 << " " << 4 << " " << 5 << endl;
            return;
        }
        reverse(ans.begin() + 2, ans.begin() + n - 1);
        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}