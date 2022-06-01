// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    vector<vector<int>> transposeMatrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            transposeMatrix[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << fixed << setprecision(8) << (matrix[i][j] + 0.0 + transposeMatrix[i][j]) / 2.0 << " ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << fixed << setprecision(8) << (matrix[i][j] + 0.0 - transposeMatrix[i][j]) / 2.0 << " ";
        cout << endl;
    }

    return 0;
}