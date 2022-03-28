// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> dirty(m, 0);
    for (int i = 0; i < m; i++)
        cin >> dirty[i];

    sort(dirty.begin(), dirty.end());

    bool flag = false;
    for (int i = 0; i < m - 2; i++)
    {
        if (dirty[i + 1] - dirty[i] == 1 && dirty[i + 2] - dirty[i + 1] == 1)
            flag = true;
    }
    if (flag)
        cout << "NO\n";
    else
        cout << "YES";

    return 0;
}