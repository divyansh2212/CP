// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> pairs;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pairs.push_back({x, 1});
        pairs.push_back({y, -1});
    }

    sort(pairs.begin(), pairs.end());

    int ans = 0, curr = 0;
    for (int i = 0; i < pairs.size(); i++)
    {
        curr += pairs[i].second;
        ans = max(ans, curr);
    }
    cout << ans;
}
int main()
{
    solve();
    return 0;
}