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

    int ones = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            ones++;
    }

    if (ones == n || ones == 0)
        cout << "YES\n";
    else
    {
        bool flag = true;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n - 1; i++)
            if (arr[i + 1] - arr[i] == 1)
                flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}