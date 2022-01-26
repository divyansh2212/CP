#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> powers(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        powers[i].first = x, powers[i].second = y;
    }

    sort(powers.begin(), powers.end());
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (powers[i].first >= s)
            flag = false;

        s += powers[i].second;
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}