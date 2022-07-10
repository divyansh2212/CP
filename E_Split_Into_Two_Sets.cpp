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

        vector<pair<int, int>> pairs(n);
        for (int i = 0; i < n; i++)
            cin >> pairs[i].first >> pairs[i].second;

        bool flag = true;

        vector<int> hsh[n + 1];

        for (int i = 0; i < n && flag; i++)
        {
            int x = pairs[i].first, y = pairs[i].second;
            if (x == y)
                flag = false;
            hsh[x].push_back(i);
            if (hsh[x].size() > 2)
                flag = false;
            hsh[y].push_back(i);
            if (hsh[y].size() > 2)
                flag = false;
        }

        vector<bool> flagArr(n + 1, false);

        for (int i = 1; i <= n && flag; i++)
        {
            if (flagArr[i])
                continue;
            if (hsh[i].size() != 2)
            {
                flag = false;
                break;
            }
            int idx1 = hsh[i][0], idx2 = hsh[i][1];

            if (flagArr[pairs[idx1].first] == false && flagArr[pairs[idx1].second] == false)
                flagArr[pairs[idx1].first] = true, flagArr[pairs[idx1].second] = true;

            else if (flagArr[pairs[idx2].first] == false && flagArr[pairs[idx2].second] == false)
                flagArr[pairs[idx2].first] = true, flagArr[pairs[idx2].second] = true;

            else
                flag = false;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}