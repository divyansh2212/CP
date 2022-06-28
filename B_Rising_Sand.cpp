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
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] + arr[i + 1])
                ans++;
        }

        if (k == 1)
        {
            int curr = 0;
            for (int i = 1; i < n - 1; i += 2)
                curr++;
            ans = max(ans, curr);
        }
        cout << ans << endl;
    }
    return 0;
}