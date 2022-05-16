// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    vector<bool> hsh(n + 1, false);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        hsh[u] = true, hsh[v] = true;
    }

    int point;
    for (int i = 1; i < n + 1; i++)
    {
        if (hsh[i] == false)
        {
            point = i;
            break;
        }
    }

    cout << n - 1 << endl;

    for (int i = 1; i < n + 1; i++)
    {
        if (i == point)
            continue;
        cout << i << " " << point << endl;
    }

    return 0;
}