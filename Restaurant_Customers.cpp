// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

bool static comparator(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> pairs(n, vector<int>(2));

    for (int i = 0; i < n; i++)
        cin >> pairs[i][0] >> pairs[i][1];

    sort(pairs.begin(), pairs.end(), comparator);
    int ans = 1, curr = 1, i = 1;

    while (i < n)
    {
        if (pairs[i - 1][1] > pairs[i][0])
            curr++;
        else
            curr = 1;
        ans = max(ans, curr);
        i++;
    }

    cout << ans;
}
int main()
{
    solve();
    return 0;
}