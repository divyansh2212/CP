#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll w, h, k;
        cin >> w >> h;

        ll area = 0;
        cin >> k;
        vector<ll> arr(k);
        for (ll i = 0; i < k; i++)
            cin >> arr[i];
        if (area < abs(arr[0] - arr[k - 1]) * h)
            area = abs(arr[0] - arr[k - 1]) * h;

        cin >> k;
        arr.resize(k);
        for (ll i = 0; i < k; i++)
            cin >> arr[i];
        if (area < abs(arr[0] - arr[k - 1]) * h)
            area = abs(arr[0] - arr[k - 1]) * h;

        cin >> k;
        arr.resize(k);
        for (ll i = 0; i < k; i++)
            cin >> arr[i];
        if (area < abs(arr[0] - arr[k - 1]) * w)
            area = abs(arr[0] - arr[k - 1]) * w;

        cin >> k;
        arr.resize(k);
        for (ll i = 0; i < k; i++)
            cin >> arr[i];
        if (area < abs(arr[0] - arr[k - 1]) * w)
            area = abs(arr[0] - arr[k - 1]) * w;

        cout << area << endl;
    }
    return 0;
}