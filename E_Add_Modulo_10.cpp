// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n);
    bool isFive = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 5 == 0)
        {
            isFive = true;
            arr[i] = arr[i] + (arr[i] % 10);
        }
        else
            while (arr[i] % 10 != 2)
                arr[i] = arr[i] + (arr[i] % 10);
    }

    if (isFive)
    {
        for (int i = 1; i < n; i++)
            if (arr[i] != arr[i - 1])
                isFive = false;
        if (isFive)
            cout << "Yes\n";
        else
            cout << "No\n";
        return;
    }

    bool flag = true;
    for (int i = 1; i < n; i++)
        if (abs(arr[i] - arr[i - 1]) % 20)
            flag = false;
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}