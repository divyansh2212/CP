// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<vector<char>> matrix(4, vector<char>(4));
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matrix[i][j];

    bool flag = false;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] == matrix[i][j + 1] && (matrix[i + 1][j] == matrix[i][j] || matrix[i + 1][j + 1] == matrix[i][j]))
                flag = true;

    for (int i = 0; i < 3; i++)
        for (int j = 3; j > 0; j--)
            if (matrix[i][j] == matrix[i][j - 1] && (matrix[i + 1][j] == matrix[i][j] || matrix[i + 1][j - 1] == matrix[i][j]))
                flag = true;

    for (int i = 3; i > 0; i--)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] == matrix[i][j + 1] && (matrix[i - 1][j] == matrix[i][j] || matrix[i - 1][j + 1] == matrix[i][j]))
                flag = true;

    for (int j = 0; j < 3; j++)
        for (int i = 0; i < 3; i++)
            if (matrix[j][i] == matrix[j][i + 1] && (matrix[j + 1][i] == matrix[j][i] || matrix[j + 1][i] == matrix[j][i + 1]))
                flag = true;

    // if (matrix[0][1] == matrix[0][2] && (matrix[1][1] == matrix[0][1] || matrix[1][2] == matrix[0][1]))
    //     flag = true;

    // if (matrix[1][1] == matrix[1][2] && (matrix[2][1] == matrix[1][1] || matrix[2][2] == matrix[1][1]))
    //     flag = true;

    // if (matrix[2][1] == matrix[2][2] && (matrix[3][1] == matrix[2][1] || matrix[3][2] == matrix[2][1]))
    //     flag = true;

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}