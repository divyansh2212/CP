// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> forward(n + 1, 0);
    vector<ll> backward(n + 1, 0);
    for (int i = 2; i < n + 1; i++)
    {
        forward[i] = arr[i - 1] - arr[i];
        if (forward[i] < 0)
            forward[i] = 0;
        forward[i] += forward[i - 1];
    }
    for (int i = n - 1; i >= 1; i--)
    {
        backward[i] = arr[i + 1] - arr[i];
        if (backward[i] < 0)
            backward[i] = 0;
        backward[i] += backward[i + 1];
    }

    while (m--)
    {
        int x, y;
        cin >> x >> y;

        if (y >= x)
            cout << forward[y] - forward[x] << endl;
        else
            cout << backward[y] - backward[x] << endl;
    }
}
int main()
{
    int t = 1;
    while (t--)
        solve();
    return 0;
}