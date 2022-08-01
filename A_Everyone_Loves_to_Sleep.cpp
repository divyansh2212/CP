// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, H, M;
    cin >> n >> H >> M;

    vector<pair<int, int>> pairs(n);

    for (int i = 0; i < n; i++)
        cin >> pairs[i].first >> pairs[i].second;

    sort(pairs.begin(), pairs.end());

    int ansh = -1, ansm = -1;
    for (int i = 0; i < n; i++)
    {
        if (pairs[i].first == H)
        {
            if (pairs[i].second >= M)
            {
                ansm = pairs[i].second - M, ansh = 0;
                break;
            }
        }
        if (pairs[i].first > H)
        {
            ansh = pairs[i].first - H;
            if (pairs[i].second < M)
                ansm = 60 - (M - pairs[i].second), ansh--;
            else
                ansm = pairs[i].second - M;
            break;
        }
    }

    if (ansh != -1)
    {
        if (ansm > 59)
            ansm = ansm - 60, ansh++;
        cout << ansh << " " << ansm << endl;
        return;
    }

    ansh = 24 - H;
    ansm = 60 - M;
    if (M > 0)
        ansh--;
    ansh += pairs[0].first;
    ansm += pairs[0].second;
    if (ansm > 59)
        ansh++, ansm = ansm - 60;
    cout << ansh << " " << ansm << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}