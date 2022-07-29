// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int minDistance(vector<pair<int, int>> &a)
{
    int ans = inf;

    vector<int> hshx(1001, 0);
    for (int i = 0; i < a.size(); i++)
        hshx[a[i].first]++;

    vector<int> hshy(1001, 0);
    for (int i = 0; i < a.size(); i++)
        hshy[a[i].second]++;

    for (int i = 0; i < a.size(); i++)
    {
        int curr = 0;
        int x = a[i].first, y = a[i].second;

        for (int j = 0; j < 1001; j++)
            curr += abs(hshx[j] * (j - x));

        for (int j = 0; j < 1001; j++)
            curr += abs(hshy[j] * (j - y));

        ans = min(ans, curr);
    }
    return ans;
}