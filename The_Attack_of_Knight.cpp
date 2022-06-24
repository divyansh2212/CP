// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<int, int>> movements = {{2, 1}, {2, -1}, {1, -2}, {1, 2}, {-2, -1}, {-1, -2}, {-2, 1}, {-1, 2}};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        unordered_set<vector<int>> st;

        for (int i = 0; i < 8; i++)
        {
            int pos1 = x1 + movements[i].first, pos2 = y1 + movements[i].second;
            if (pos1 > 0 && pos2 > 0)
                st.insert({pos1, pos2});
        }

        bool flag = false;
        for (int i = 0; i < 8; i++)
        {
            int pos1 = x2 + movements[i].first, pos2 = y2 + movements[i].second;
            if (pos1 > 0 && pos2 > 0)
            {
                if (st.find({pos1, pos2}) != st.end())
                    flag = true;
            }
        }
        st.clear();

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}