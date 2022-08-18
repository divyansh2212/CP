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

    int ops = 0;
    for (int i = 0; i < arr[0].length(); i++)
    {
        if (arr[0][i] == '1')
        {
            if (i == 0)
            {
                if ((arr[0][i + 1] == '0' && arr[1][i] == '0') || (arr[0][i + 1] == '0' && arr[1][i + 1] == '0'))
                    ops++;
                else if (arr[0][i + 1] == '0' && arr[1][i] == '1')
                    arr[1][i] = '0', ops++;
                else if (arr[0][i + 1] == '0' && arr[1][i + 1] == '1')
                    arr[1][i + 1] = '0', ops++;
                else if (arr[0][i + 1] == '1' && arr[1][i] == '0')
                    ops++, arr[0][i + 1] = '0';
                else if (arr[0][i + 1] == '1' && arr[1][i + 1] == '0')
                    arr[0][i + 1] = '0', ops++;
                else
                    ops++, arr[0][i + 1] = '0', arr[1][i] = '0';
            }
            else if (i == m - 1)
            {
                if ((arr[0][i - 1] == '0' && arr[1][i] == '0') || (arr[0][i - 1] == '0' && arr[1][i - 1] == '0'))
                    ops++;
                else if (arr[0][i - 1] == '1' && arr[1][i] == '0')
                    ops++, arr[0][i - 1] = '0';
                else if (arr[0][i - 1] == '0' && arr[1][i] == '1')
                    arr[1][i] = '0', ops++;
                else if (arr[0][i - 1] == '1' && arr[1][i - 1] == '0')
                    arr[0][i - 1] = '0', ops++;
                else if (arr[0][i - 1] == '0' && arr[1][i - 1] == '1')
                    arr[1][i - 1] = '0', ops++;
                else
                    ops++, arr[0][i - 1] = '0', arr[1][i] = '0';
            }
            else
            {
                if (arr[1][i] == '0' || arr[1][i - 1] == '0')
                    ops++;
                else if (arr[0][i + 1] == '0')
                    ops++, arr[1][i + 1] = '0';
                else
                    ops++, arr[1][i] = '0';
            }
        }
    }

    for (int i = 1; i < n; i++)
        for (int j = 0; j < m; j++)
            if (arr[i][j] == '1')
                ops++;

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