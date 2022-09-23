// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> b(m + 1);
    for (int i = 1; i < m + 1; i++)
        cin >> b[i];

    vector<bool> visited(n, false);
    for (int i = 1; i < m + 1; i++)
    {
        ll sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (visited[j])
                continue;
            if (a[j] % b[i] == 0)
                sum1 += a[j];
            else
                sum2 += a[j];
        }
        if (i % 2)
        {
            if (sum1 > sum2)
            {
                for (int j = 0; j < n; j++)
                    if (a[j] % b[i] == 0)
                        visited[j] = true;
            }
            else
            {
                for (int j = 0; j < n; j++)
                    if (a[j] % b[i])
                        visited[j] = true;
            }
        }
        else
        {
            if (sum1 > sum2)
            {
                for (int j = 0; j < n; j++)
                    if (a[j] % b[i])
                        visited[j] = true;
            }
            else
            {
                for (int j = 0; j < n; j++)
                    if (a[j] % b[i] == 0)
                        visited[j] = true;
            }
        }
    }

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        sum += a[i];
    }
    cout << sum;
}
int main()
{
    solve();
    return 0;
}