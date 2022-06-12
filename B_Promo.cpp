// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, q;
    cin >> n >> q;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    vector<ll> prefixSum(n + 1, 0);

    for (int i = 1; i < n + 1; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];

    while (q--)
    {
        ll x, y;
        cin >> x >> y;

        ll diff = x - y;

        cout << prefixSum[n - diff] - prefixSum[n - diff - y] << endl;
    }

    return 0;
}