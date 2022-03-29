// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    vector<ll> dirty_stairs(m);
    bool flag = true;
    for (int i = 0; i < m; i++)
    {
        cin >> dirty_stairs[i];
        if (dirty_stairs[i] == 1 || dirty_stairs[i] == n)
            flag = false;
    }

    sort(dirty_stairs.begin(), dirty_stairs.end());

    for (int i = 0; i < m - 2; i++)
    {
        if (dirty_stairs[i + 1] - dirty_stairs[i] == 1 && dirty_stairs[i + 2] - dirty_stairs[i + 1] == 1)
            flag = false;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}