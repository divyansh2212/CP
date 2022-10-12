// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int m, t, r;
    cin >> m >> t >> r;

    vector<int> w(m);
    for (int i = 0; i < m; i++)
        cin >> w[i];

    if (r > t)
    {
        cout << -1;
        return;
    }

    int num = r, start = t + w[0] - 1, ans = r;
    vector<int> lits;

    while (num--)
    {
        lits.push_back(start);
        start--;
    }

    for (int i = 1; i < m; i++)
    {
        start = t + w[i] - 1;
        for (int j = 0; j < r; j++)
        {
            if (lits[j] < w[i])
            {
                lits[j] = start;
                start--, ans++;
            }
        }
    }
    cout << ans;

}
int main()
{
    solve();
    return 0;
}