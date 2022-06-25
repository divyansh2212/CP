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
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> arr(n);
        unordered_map<ll, ll> mp;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        ll ans = 0;

        ll i = 0, j = n - 1;

        while (i < j)
        {
            if (arr[i] + arr[j] > r)
            {
                j--;
                continue;
            }
            if (arr[i] + arr[j] < l)
            {
                i++;
                continue;
            }
            ll target = r - arr[j];
            ll lo = i, hi = j - 1, mid, probable = lo;
            while (lo <= hi)
            {
                mid = lo + ((hi - lo) / 2);
                if (arr[mid] <= target)
                    lo = mid + 1, probable = mid;
                else
                    hi = mid - 1;
            }
            ans += probable - i + 1;
            j--;
        }

        cout << ans << endl;
    }
    return 0;
}