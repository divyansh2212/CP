// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> hsh[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        hsh[x].push_back(i);
    }
    vector<int> result(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (hsh[i].size() == 0)
            continue;
        int total = 0;
        for (int j = 1; j < hsh[i].size(); j++)
        {
            if ((hsh[i][j] - hsh[i][j - 1] - 1) % 2)
                continue;
            total++;
        }
        total++;
        result[i] = total;
    }
    for (int i = 1; i <= n; i++)
        cout << result[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}