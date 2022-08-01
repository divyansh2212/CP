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

    priority_queue<ll> a, b;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        a.push(x);
    }
    b.push(sum);

    bool flag = true;

    while (a.size() && b.size())
    {
        ll it1 = a.top(), it2 = b.top();

        if (it1 == it2)
        {
            a.pop();
            b.pop();
        }
        else if (it1 > it2)
            break;
        else
        {
            b.pop();
            b.push(it2 / 2);
            b.push((it2 / 2) + (it2 % 2));
        }
    }

    if (a.size() == 0 && b.size() == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}