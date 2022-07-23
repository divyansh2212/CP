// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF INT_MAX
const int M = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0, i = 0, j = 1;

    while (j < n)
    {
        if (n - 1 - i < k)
            break;
        if (arr[j - 1] >= (arr[j] * 2))
            i = j, j = i + 1;
        else
        {
            if (j - i == k)
                i++, j++, ans++;
            else
                j++;
        }
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}