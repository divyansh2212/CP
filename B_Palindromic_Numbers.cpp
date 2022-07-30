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

    string num;
    cin >> num;

    if (num[0] == '9')
    {
        string ans(n, '0');
        int carry = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = num[i] - '0' + carry;
            if (x == 0)
                ans[i] = '1', carry = 0;
            else if (x == 1)
                ans[i] = '0', carry = 0;
            else
                ans[i] = 11 - x + '0', carry = 1;
        }
        cout << ans;
    }
    else
        for (int i = 0; i < n; i++)
            cout << '9' - num[i];
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}