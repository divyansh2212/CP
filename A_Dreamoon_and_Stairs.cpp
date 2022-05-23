// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;

    if (m > n)
    {
        cout << -1;
        return 0;
    }

    int min_steps = n / 2;
    if (n % 2)
        min_steps = (n + 1) / 2;

    int ans = n;
    for (int i = n; i >= min_steps; i--)
        if (i % m == 0)
            ans = i;

    cout << ans << endl;

    return 0;
}