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
        int n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        int idx1 = n - 1, idx2 = n - 1 - k, to_add = 0;
        for (int i = 0; i < n - 2 * k; i++)
            to_add += arr[i];

        while (k--)
        {
            to_add += arr[idx2] / arr[idx1];
            idx1--, idx2--;
        }

        cout << to_add << endl;
    }
    return 0;
}