// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, isOne = 0;
    cin >> n;

    vector<ll> arr(n);
    ll mini = inf;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            isOne = 1;
        mini = min(mini, arr[i]);
    }

    if (arr[0] == 1)
    {
        cout << "Bob\n";
        return;
    }
    else if (isOne)
    {
        cout << "Alice\n";
        return;
    }

    if (mini == arr[0])
        cout << "Bob\n";
    else
        cout << "Alice\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}