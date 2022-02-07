#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mx = INT_MIN, mn = INT_MAX;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
        mx = max(mx, x);
        mn = min(mn, x);
    }
    if (mx == mn)
        cout << 0 << " " << (m[mx] * 1LL * (m[mx] - 1)) / 2;
    else
        cout << mx - mn << " " << m[mx] * 1LL * m[mn];
    return 0;
}