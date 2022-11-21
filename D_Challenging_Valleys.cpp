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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<pair<int, int>> pairs;
    pairs.push_back({0, 0});
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            pairs.back().second++;
        else
            pairs.push_back({i, i});
    }

    int cnt = 0;
    for (int i = 0; i < pairs.size(); i++)
    {
        bool flag = true;
        int l = pairs[i].first, r = pairs[i].second;
        if (l != 0)
        {
            if (arr[l - 1] <= arr[l])
                flag = false;
        }
        if (r != n - 1)
        {
            if (arr[r + 1] <= arr[r])
                flag = false;
        }
        if (flag)
            cnt++;
    }

    if (cnt == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}