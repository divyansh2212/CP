#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];

    ll ans = h[0] + 1;

    for (int i = 1; i < n; i++)
        ans += abs(h[i] - h[i - 1]) + 2;

    cout << ans;

    return 0;
}