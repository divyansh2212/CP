// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(n), c(m);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < m; i++)
            cin >> c[i];

        vector<vector<int>> need_paint(n + 1);

        for (int i = 0; i < n; i++)
            if (b[i] != a[i])
                need_paint[b[i]].push_back(i + 1);

        int last = -1;

        if (need_paint[c[m - 1]].size() > 0)
        {
            last = need_paint[c[m - 1]].back();
            need_paint[c[m - 1]].pop_back();
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                if (b[i] == c[m - 1])
                {
                    last = i + 1;
                    break;
                }
            }
        }

        if (last == -1)
        {
            cout << "NO\n";
            continue;
        }

        vector<int> ans(m);
        ans[m - 1] = last;

        for (int i = 0; i < m - 1; i++)
        {
            if (need_paint[c[i]].size() > 0)
            {
                ans[i] = need_paint[c[i]].back();
                need_paint[c[i]].pop_back();
            }
            else
                ans[i] = last;
        }

        bool flag = false;
        for (int i = 0; i < n + 1; i++)
        {
            if (need_paint[i].size() > 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        for (int i = 0; i < m; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}