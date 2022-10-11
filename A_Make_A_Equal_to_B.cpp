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

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int ans = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            ans++;

    int ones = 0, zeroes = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i])
            ones++;
        if (b[i])
            ones--;
        if (a[i] == 0)
            zeroes++;
        if (b[i] == 0)
            zeroes--;
    }

    int curr = min(abs(ones), abs(zeroes));
    cout << min(ans, curr + 1) << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}