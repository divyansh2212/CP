// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        ll items = 0;

        for (int i = 1; i < n; i++)
            arr[i] += arr[i - 1];

        for (int i = 0; i < n; i++)
        {
            ll diff = x - arr[i];
            if (diff >= 0)
                items += (diff) / (i + 1) + 1;
        }

        cout << items << endl;
    }
    return 0;
}