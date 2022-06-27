// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        cout << n / 2 << endl;
        for (int i = 0; i < n - 1; i += 2)
        {
            arr[i] = min(arr[i], arr[i + 1]);
            arr[i + 1] = M;
            cout << i + 1 << " " << i + 2 << " " << arr[i] << " " << M << endl;
        }
    }
    return 0;
}