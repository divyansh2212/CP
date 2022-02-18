#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, h;
        cin >> n >> h;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long lo = 1, hi = 1e18;
        while (hi - lo >= 0)
        {
            long long mid = (lo + hi) / 2;
            long long sum = mid;
            for (int i = 0; i < n - 1; i++)
                sum += min(mid, arr[i + 1] - arr[i]);
            if (sum < h)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        cout << hi + 1 << endl;
    }
    return 0;
}