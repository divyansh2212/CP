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

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        flag = false;
        for (int j = i + 1; j >= 2; j--)
        {
            if (arr[i] % j)
                flag = true;
            if (flag)
                break;
        }
        if (flag == false)
            break;
    }

    if (flag == false)
        cout << "NO\n";
    else
        cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}