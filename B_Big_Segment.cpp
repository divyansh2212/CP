// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int n;
    cin >> n;

    vector<pair<int, int>> pairs(n);
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> pairs[i].first >> pairs[i].second;
        mx = max(mx, pairs[i].second);
        mn = min(mn, pairs[i].first);
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
        if (pairs[i].first <= mn && pairs[i].second >= mx)
            ans = i + 1;

    cout << ans << endl;

    return 0;
}