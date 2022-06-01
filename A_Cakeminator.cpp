// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<char>> grid(r, vector<char>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> grid[i][j];

    vector<vector<int>> hsh(r, vector<int>(c, 0));

    for (int i = 0; i < r; i++)
    {
        bool flag = true;
        for (int j = 0; j < c; j++)
            if (grid[i][j] == 'S')
                flag = false;

        if (flag)
            for (int j = 0; j < c; j++)
                hsh[i][j] = 1;
    }

    for (int j = 0; j < c; j++)
    {
        bool flag = true;
        for (int i = 0; i < r; i++)
            if (grid[i][j] == 'S')
                flag = false;

        if (flag)
            for (int i = 0; i < r; i++)
                hsh[i][j] = 1;
    }

    int ans = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (hsh[i][j])
                ans++;

    cout << ans;
    return 0;
}