// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;

    vector<pair<char, int>> pairs;
    for (int i = 0; i < s.length(); i++)
    {
        if (pairs.size() && pairs.back().first == s[i])
            pairs.back().second++;
        else
            pairs.push_back({s[i], 1});
    }

    for (int i = 0; i < pairs.size(); i++)
        pairs[i].second = min(pairs[i].second, 2);

  

    int continuous = 0;
    for (int i = 0; i < pairs.size(); i++)
    {
        if (pairs[i].second == 1)
        {
            if (continuous == 2)
                pairs[i - 1].second--, continuous = 0;
            continue;
        }
        else
            continuous++;
        if (continuous == 3)
            pairs[i - 1].second--, continuous = 1;
    }
    if (continuous == 2)
        pairs[pairs.size() - 1].second--;

    string ans = "";
    for (int i = 0; i < pairs.size(); i++)
    {
        int cnt = pairs[i].second;
        while (cnt--)
            ans.push_back(pairs[i].first);
    }

    cout << ans;
}
int main()
{
    solve();
    return 0;
}