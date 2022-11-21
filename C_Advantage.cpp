// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    int firstbest = -1, secondBest = -1, idx = -1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<ll> cpy = arr;
    sort(cpy.begin(), cpy.end());
    firstbest = cpy[n - 1], secondBest = cpy[n - 2];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == firstbest)
            cout << arr[i] - secondBest << " ";
        else
            cout << arr[i] - firstbest << " ";
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}