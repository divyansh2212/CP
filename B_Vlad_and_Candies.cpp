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
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n == 1 && arr[0] > 1)
        {
            cout << "NO\n";
            continue;
        }

        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }

        sort(arr.begin(), arr.end());

        if (arr[n - 1] - arr[n - 2] >= 2)
            cout << "NO\n";

        else
            cout << "YES\n";
    }
    return 0;
}