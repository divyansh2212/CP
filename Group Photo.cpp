// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool static cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

bool static cmp2(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int findLargestGroup(int n, vector<int> &a, vector<int> &b)
{
    int ans1 = n, ans2 = n;

    vector<pair<int, int>> pairs;
    for (int i = 0; i < a.size(); i++)
        pairs.push_back({a[i], b[i]});

    sort(pairs.begin(), pairs.end(), cmp);

    for (int i = 0; i < n; i++)
        if (pairs[i].first > i || (n - 1 - i) > pairs[i].second)
            ans1--;

    sort(pairs.begin(), pairs.end(), cmp2);
    for (int i = 0; i < n; i++)
        if (pairs[i].first > i || (n - 1 - i) > pairs[i].second)
            ans2--;
    return max(ans1, ans2);
}