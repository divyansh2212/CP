// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << "\n";
        cout << "1 2"
             << "\n";
        return;
    }

    int i = 1, j = 3 * n;

    // cout << ceil((n * 1.0) / 3) << "\n";
    // while (i < j)
    // {
    //     cout << i << " " << j << "\n";
    //     i += 3, j -= 3;
    // }

    vector<pair<int, int>> pairs;
    while (i < j)
    {
        pairs.push_back({i, j});
        i += 3, j -= 3;
    }
    cout << pairs.size() << "\n";
    for (int i = 0; i < pairs.size(); i++)
        cout << pairs[i].first << " " << pairs[i].second << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}