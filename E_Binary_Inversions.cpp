// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int zeroes = 0, lastOne = -1, firstZero = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            zeroes++;
            if (firstZero == -1)
                firstZero = i;
        }
        else
            lastOne = i;
    }

    ll ans = 0, currZero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            currZero++;
        else
            ans += zeroes - currZero;
    }

    if (firstZero != -1)
    {
        arr[firstZero] = 1, zeroes--;
        ll count = 0;
        currZero = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                currZero++;
            else
                count += zeroes - currZero;
        }
        arr[firstZero] = 0, zeroes++;
        ans = max(ans, count);
    }
    if (lastOne != -1)
    {
        arr[lastOne] = 0, zeroes++;
        ll count = 0;
        currZero = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                currZero++;
            else
                count += zeroes - currZero;
        }
        arr[lastOne] = 1, zeroes--;
        ans = max(ans, count);
    }
    cout << ans << "\n";
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}