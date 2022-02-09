#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<pair<char, int>> m;
        for (auto x : s)
        {
            if (m.empty() || m.back().first != x)
                m.push_back(make_pair(x, 1));
            else
                m.back().second++;
        }

        int ans = INT_MAX;
        for (int i = 1; i < m.size() - 1; i++)
        {
            if (m[i - 1].first != m[i + 1].first)
                ans = min(ans, m[i].second + 2);
        }

        if (ans > s.length())
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}