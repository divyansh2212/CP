// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int xx;
        cin >> xx;
        while (xx % 2 == 0)
        {
            cnt++;
            xx = xx / 2;
        }
    }

    if (cnt >= n)
    {
        cout << 0 << "\n";
        return;
    }

    priority_queue<int> pq;
    for (int i = 2; i <= n; i += 2)
    {
        int num = i, cnti = 0;
        while (num % 2 == 0)
        {
            cnti++;
            num = num / 2;
        }
        pq.push(cnti);
    }

    int reqd = n - cnt;
    int ans = 0;
    while (pq.size() && reqd > 0)
    {
        ans++;
        int top = pq.top();
        pq.pop();
        reqd = reqd - top;
        if (reqd <= 0)
        {
            cout << ans << "\n";
            return;
        }
    }
    cout << "-1\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}