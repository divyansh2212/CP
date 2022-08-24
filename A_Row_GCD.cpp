// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<ll> ans(m);
    for (int i = 0; i < m; i++)
    {
        ans[i] = a[0] + b[i];
        for (int j = 1; j < n; j++)
            ans[i] = __gcd(ans[i], a[j] + b[i]);
    }
    for (int i = 0; i < m; i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}