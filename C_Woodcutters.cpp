// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> pairs(n);
    for (int i = 0; i < n; i++)
        cin >> pairs[i].first >> pairs[i].second;

    if (n <= 2)
    {
        cout << n;
        return;
    }

    int ans = 2;
    int leftOccupied = pairs[0].first;
    for (int i = 1; i < n - 1; i++)
    {
        int x = pairs[i].first, h = pairs[i].second;
        if (x - h > leftOccupied)
            ans++;
        else if (x + h < pairs[i + 1].first)
            leftOccupied = x + h, ans++;

        leftOccupied = max(leftOccupied, x);
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}