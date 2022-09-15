// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int> ans(n + 1);

    // cout << "? " << 1 << " " << n << endl;
    // cin >> ans[n];

    for (int i = 2; i <= n; i++)
    {
        cout << "? " << 1 << " " << i << endl;
        cin >> ans[i];
    }

    cout << "? " << 2 << " " << n << endl;
    int result;
    cin >> result;
    ans[1] = ans[n] - result;

    cout << "! " << ans[1] << " ";

    for (int i = 2; i < n + 1; i++)
        cout << ans[i] - ans[i - 1] << " ";
}
int main()
{

    solve();
    return 0;
}