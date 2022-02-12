#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char chess[n][m] = {'0'};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> chess[i][j];

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (chess[i][j] == '.')
            {
                if (flag)
                    chess[i][j] = 'B';
                else
                    chess[i][j] = 'W';
            }
            flag = !flag;
        }
        if (m % 2 == 0)
            flag = !flag;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << chess[i][j];
        cout << endl;
    }

    return 0;
}