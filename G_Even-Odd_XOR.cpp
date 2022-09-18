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

    if (n == 3)
    {
        cout << 2 << " " << 1 << " " << 3 << endl;
        return;
    }

    vector<int> ans(n + 1, 0);

    for (int i = 1, cnt = 1; i <= n; i += 2, cnt += 2)
    {
        ans[i] = cnt;
        if (i + 1 <= n)
        {
            int num = cnt;
            num = (num | (1 << 26));
            num = (num | (1 << 28));

            ans[i + 1] = num;
        }
        else
            ans[i] = 0;
    }

    if ((n / 2) % 2)
    {
        bool flag = false;
        if (n % 2)
            n--, flag = true;
        for (int i = 4; i < n; i += 2)
            ans[i] = (ans[i] ^ (1 << 28));

        if (flag)
            n++;
        ans[2] = (ans[2] ^ (1 << 26));
    }

    for (int i = 1; i < n + 1; i++)
        cout << ans[i] << " ";
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