// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    vector<string> grid(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> grid[i];
    }

    for (int i = 0; i < 8; i++)
    {
        int rs = 0;
        for (int j = 0; j < 8; j++)
            if (grid[i][j] == 'R')
                rs++;
        if (rs == 8)
        {
            cout << "R\n";
            return;
        }
    }

    for (int j = 0; j < 8; j++)
    {
        int bs = 0;
        for (int i = 0; i < 8; i++)
            if (grid[i][j] == 'B')
                bs++;
        if (bs == 8)
        {
            cout << "B\n";
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}