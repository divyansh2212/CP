// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool static compare(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}

int main()
{
    int n, k;
    cin >> n >> k;
    k--;

    vector<pair<int, int>> pairs(n);
    for (int i = 0; i < n; i++)
        cin >> pairs[i].first >> pairs[i].second;

    sort(pairs.begin(), pairs.end(), compare);
    int ans = 1, i = k - 1;
    while (i >= 0)
    {
        if (pairs[i] == pairs[k])
            ans++, i--;
        else
            break;
    }
    i = k + 1;
    while (i < n)
    {
        if (pairs[i] == pairs[k])
            ans++, i++;
        else
            break;
    }

    cout << ans << endl;

    return 0;
}