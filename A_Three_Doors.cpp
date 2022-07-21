// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    int x;
    cin >> x;
    vector<int> arr(4);
    vector<bool> flag(4, false);
    for (int i = 1; i < 4; i++)
    {
        cin >> arr[i];
    }

    flag[x] = true;

    while (1)
    {
        if (x == 0)
            break;
        if (flag[arr[x]] == false)
            flag[arr[x]] = true;
        x = arr[x];
    }

    if (flag[1] && flag[2] && flag[3])
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}