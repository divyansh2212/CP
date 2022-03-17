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

        bool isChessLike = ((x1 + y1) & 1) != ((x2 + y2) & 1);

        for (ll i = 1; i < n + 1; i++)
        {
            for (ll j = 1; j < m + 1; j++)
            {
                if ((i == x1 && j == y1) || (i == x2 && j == y2))
                    continue;

                if (((x1 + y1) & 1) == ((i + j) & 1))
                    arr[i][j] = 1;
                else
                {
                    if (isChessLike)
                        arr[i][j] = 2;
                    else
                        arr[i][j] = 3;
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