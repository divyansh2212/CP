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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int> minIdx;
    map<int, int> maxIdx;

    // int i = 0;
    for (int i = 0; i < n; i++)
    {
        if (minIdx.find(arr[i]) == minIdx.end())
            minIdx[arr[i]] = i;
        maxIdx[arr[i]] = i;
    }

    vector<pair<int, int>> pairs;
    for (auto &it : minIdx)
        pairs.push_back({it.second, maxIdx[it.first]});

    // bool flag = false;
    for (int i = 0; i < pairs.size(); i++)
    {
        int left = pairs[i].first - 1, right = pairs[i].second + 1;

        // int cnt = 0;
        set<int> st;
        for (int j = 0; j <= left; j++)
        {
            cnt++;
            j = maxIdx[arr[j]] + 1;
        }
        for (int j = right; j < n && cnt < 2;)
        {
            cnt++;
            j = maxIdx[arr[j]] + 1;
        }

        if (cnt < 2)
        {
            cout << "YES\n";
            return;
        }
    }
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