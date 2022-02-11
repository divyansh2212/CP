#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> games;
        while (n--)
        {
            int p, c;
            cin >> p >> c;
            games.push_back(make_pair(p, c));
        }

        if (games.size() == 1)
        {
            if (games[0].first >= games[0].second)
                cout << "YES\n";
            else
                cout << "NO\n";
            continue;
        }

        bool flag = true;
        if (games[0].first < games[0].second)
            flag = false;
        for (int i = 1; i < games.size(); i++)
        {
            if (games[i].first < games[i - 1].first || games[i].second < games[i - 1].second)
                flag = false;
            if (games[i].first - games[i - 1].first < games[i].second - games[i - 1].second)
                flag = false;
            if (games[i].first < games[i].second)
                flag = false;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}