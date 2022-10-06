// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> pairs;
    for (int i = 0; i < n; i++)
    {
        int L;
        cin >> L;
        pairs.push_back({L, i + 1});
    }
    sort(pairs.begin(), pairs.end());

    bool flag = false;
    int i = 0, j = n - 1, idx1, idx2;
    while (i < j && flag == false)
    {
        if (pairs[i].first + pairs[j].first == x)
            idx1 = pairs[i].second, idx2 = pairs[j].second, flag = true;
        else if (pairs[i].first + pairs[j].first < x)
            i++;
        else
            j--;
    }
    if (flag)
        cout << idx2 << " " << idx1;
    else
        cout << "IMPOSSIBLE";
}
int main()
{
    solve();
    return 0;
}