#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;

    if (m == 1 && s == 0)
    {
        cout << "0 0";
        return 0;
    }
    if (m * 9 < s || s == 0)
    {
        cout << "-1 -1";
        return 0;
    }

    vector<int> digits1(m, 0);
    int sum = s;
    digits1[0] = 1, sum--;
    for (int i = m - 1; i >= 0; i--)
    {
        if (sum >= 9 - digits1[i])
        {
            sum -= (9 - digits1[i]);
            digits1[i] = 9;
        }
        else
        {
            digits1[i] += sum;
            sum = 0;
        }
    }
    for (int i = 0; i < m; i++)
        cout << digits1[i];
    cout << " ";

    vector<int> digits(m, 0);
    digits[0] = 1, s--;
    for (int i = 0; i < m; i++)
    {
        if (s >= 9 - digits[i])
        {
            s -= (9 - digits[i]);
            digits[i] = 9;
        }
        else
        {
            digits[i] += s;
            s = 0;
        }
    }

    for (int i = 0; i < m; i++)
        cout << digits[i];

    return 0;
}