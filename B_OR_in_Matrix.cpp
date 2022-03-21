// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> b(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < m + 1; j++)
            cin >> b[i][j];

    vector<vector<int>> a(n + 1, vector<int>(m + 1, 1));

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (b[i][j] == 0)
            {
                for (int k = 1; k < n + 1; k++)
                    a[k][j] = 0;
                for (int k = 1; k < m + 1; k++)
                    a[i][k] = 0;
            }
        }
    }

    vector<vector<int>> c_b(n + 1, vector<int>(m + 1));

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            c_b[i][j] = 0;
            for (int k = 1; k < n + 1; k++)
                c_b[i][j] |= a[k][j];
            for (int k = 1; k < m + 1; k++)
                c_b[i][j] |= a[i][k];
        }
    }

    bool flag = false;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (b[i][j] != c_b[i][j])
                flag = true;
        }
        if (flag)
            break;
    }
    if (flag)
    {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}