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
        int n;
        cin >> n;

        vector<ll> shoes(n);
        map<ll, ll> m;
        ll x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> shoes[i];
            x = shoes[i];
            m[shoes[i]]++;
        }

        if (m[x] == n)
        {
            cout << n << " ";
            for (int i = 1; i < n; i++)
                cout << i << " ";
            cout << endl;
            continue;
        }

        bool flag = true;
        for (auto &it : m)
            if (it.second == 1)
                flag = false;

        if (flag == false)
        {
            cout << -1 << endl;
            continue;
        }

        vector<ll> g[n];
        int curr = 0;
        g[curr].push_back(1);
        for (int i = 1; i < n; i++)
        {
            if (shoes[i] != shoes[i - 1])
            {
                reverse(g[curr].begin(), g[curr].end());
                curr++;
            }
            g[curr].push_back(i + 1);
        }
        reverse(g[curr].begin(), g[curr].end());

        // curr = 1;
        // for (int i = 0; i < n; i++)
        // {
        //     bool flag = false;
        //     for (int j = 0; j < g[i].size(); j++)
        //     {
        //         if (g[i][j] == curr)
        //             flag = true;
        //         curr++;
        //     }
        //     if (flag)
        //         reverse(g[i].begin(), g[i].end());
        //     if (g[i].size() == 0)
        //         break;
        // }

        for (int i = 0; i < n; i++)
        {
            if (g[i].size())
                for (int j = 0; j < g[i].size(); j++)
                    cout << g[i][j] << " ";
            else
                break;
        }
        cout << endl;
    }
    return 0;
}