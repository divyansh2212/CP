#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(vector<vector<bool>> &visited, int i, int j, vector<vector<int>> &arr)
{
    int n = arr.size(), m = arr[0].size();
    visited[i][j] = true;
    if (i + 1 < n)
    {
        if (visited[i + 1][j] == false && arr[i + 1][j] == 1)
            dfs(visited, i + 1, j, arr);
    }
    if (j + 1 < m)
    {
        if (visited[i][j + 1] == false && arr[i][j + 1] == 1)
            dfs(visited, i, j + 1, arr);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> strings(n);

        for (int i = 0; i < n; i++)
            cin >> strings[i];
        
        vector<vector<int>> arr(n, vector<int>(m));
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int ones = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                 arr[i][j] = strings[i][j] - '0';
                if (arr[i][j] == 1)
                    ones++;
            }
        }

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1)
                {
                    dfs(visited, i, j, arr);
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }

        flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1 && visited[i][j] == false)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
        {
            cout << "YES\n";
            continue;
        }

        int lenx = 0, leny = 0;
        for (int i = 0; i < n; i++)
        {
            int currlenx = 0;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1)
                    currlenx++;
                else
                {
                    lenx = max(lenx, currlenx);
                    currlenx = 0;
                }
            }
            lenx = max(lenx, currlenx);
        }

        for (int i = 0; i < m; i++)
        {
            int currleny = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j][i] == 1)
                    currleny++;
                else
                {
                    leny = max(leny, currleny);
                    currleny = 0;
                }
            }
            leny = max(leny, currleny);
        }
        if ((lenx * leny) == ones)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}