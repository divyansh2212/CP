// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> arr = {a, b, c};
    sort(arr.begin(), arr.end());

    cout << arr[1] << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}