#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, x1, y1, x2, y2;
        cin >> n >> m;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        vector<vector<ll>> arr(n + 1, vector<ll>(m + 1, -1));
        arr[x1][y1] = 1, arr[x2][y2] = 2;

        if (y1 + 1 >= m)
            arr[x1][y1 + 1] = 0;
        if (x1 + 1 >= n)
            arr[x1 + 1][y1] = 0;
        if (y1 - 1 <= 1)
            arr[x1][y1 - 1] = 0;
        if (x1 - 1 <= 1)
            arr[x1 - 1][y1] = 0;

        if (y2 + 1 >= m)
            if (arr[x2][y2 + 1] == 0)
                arr[x2][y2 + 1] = 3;
        if (x2 + 1 >= n)
            if (arr[x2 + 1][y2] == 0)
                arr[x2 + 1][y2] = 3;
        if (y2 - 1 <= 1)
            if (arr[x2][y2 - 1] == 0)
                arr[x2][y2 - 1] = 3;
        if (x2 - 1 <= 1)
            if (arr[x2 - 1][y2] == 0)
                arr[x2 - 1][y2] = 3;

        for (ll i = 1; i < n + 1; i++)
        {
            for (ll j = 1; j < m + 1; j++)
            {
                if (arr[i][j] != -1 && arr[i][j] != 0)
                    continue;
                vector<bool> flag(4, false);
                if (i - 1 >= 1)
                    if (arr[i - 1][j] != 0 && arr[i - 1][j] != -1)
                        flag[arr[i - 1][j]] = true;
                if (j - 1 >= 1)
                    if (arr[i][j - 1] != 0 && arr[i][j - 1] != -1)
                        flag[arr[i][j - 1]] = true;
                if (j + 1 <= m)
                    if (arr[i][j + 1] != 0 && arr[i][j + 1] != -1)
                        flag[arr[i][j + 1]] = true;
                if (i + 1 <= n)
                    if (arr[i + 1][j] != 0 && arr[i + 1][j] != -1)
                        flag[arr[i + 1][j]] = true;
                for (int k = 1; k < 4; k++)
                {
                    if (flag[k] == false)
                    {
                        arr[i][j] = k;
                        break;
                    }
                }
            }
        }

        for (ll i = 1; i < n + 1; i++)
        {
            for (ll j = 1; j < m + 1; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}