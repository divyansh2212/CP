// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ops = 0, flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '1')
                ops++;
            else
                flag = 1;
        }
    }

    if (flag)
    {
        flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '0')
                {
                    for (int di = -1; di <= 1; di++)
                    {
                        for (int dj = -1; dj <= 1; dj++)
                        {
                            if (di == 0 && dj == 0)
                                continue;
                            int x = i + di, y = j + dj;
                            if (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] == '0')
                                flag = 1;
                        }
                    }
                }
            }
        }

        if (flag == 0)
            ops--;
    }
    
    else
        ops -= 2;

    cout << ops << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}