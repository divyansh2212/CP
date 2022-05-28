// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    long long maximumImportance(int n, vector<vector<int>> &roads)
    {
        vector<ll> roadshsh(n, 0);
        for (ll i = 0; i < roads.size(); i++)
        {
            roadshsh[roads[i][0]]++;
            roadshsh[roads[i][1]]++;
        }

        vector<pair<ll, ll>> pairs;
        for (ll i = 0; i < roadshsh.size(); i++)
            pairs.push_back({roadshsh[i], i});

        sort(pairs.begin(), pairs.end());

        vector<ll> ranks(n);

        ll cnt = 1;
        for (ll i = 0; i < pairs.size(); i++)
        {
            ranks[pairs[i].second] = cnt;
            cnt++;
        }

        ll ans = 0;
        for (ll i = 0; i < roads.size(); i++)
            ans += ranks[roads[i][0]] + ranks[roads[i][1]];

        return ans;
    }
};