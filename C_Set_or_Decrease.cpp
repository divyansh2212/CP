#include <bits/stdc++.h>
const int sz = 2e5 + 1;
const int inf = 1e9 + 1;
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, k;
    cin >> t;
    while (t--)
    {
        ll tot = 0;
        cin >> n >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            tot += arr[i];
        }
        sort(arr.begin(), arr.end());

        ll lo = 0, hi = 1e15, mid, ans = 1e18;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            ll currsum = tot;
            currsum -= mid;
            ll y = n;
            for (int i = n - 1; i > 0 && currsum > k; i--)
            {
                currsum -= arr[i];
                currsum += (arr[0] - mid);
                if (currsum <= k)
                    y = i;
            }

            if (currsum <= k && mid + n - y <= ans)
                hi = mid - 1, ans = mid + n - y;
            else
                lo = mid + 1;
        }

        cout << ans << endl;
    }
}
