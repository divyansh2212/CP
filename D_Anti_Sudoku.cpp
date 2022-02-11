#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> movements = {{0, 0}, {1, 3}, {2, 6}, {3, 1}, {4, 4}, {5, 7}, {6, 2}, {7, 5}, {8, 8}};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char sudoku[9][9];

        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                cin >> sudoku[i][j];

        for (int i = 0; i < movements.size(); i++)
        {
            int j = movements[i].first, k = movements[i].second;
            if (sudoku[j][k] == '9')
                sudoku[j][k] = '1';
            else
                sudoku[j][k] += 1;
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
                cout << sudoku[i][j];
            cout << endl;
        }
    }
    return 0;
}