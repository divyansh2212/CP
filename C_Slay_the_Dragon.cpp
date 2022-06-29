// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    vector<ll> arr(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    int m;
    cin >> m;
    while (m--)
    {
        ll x, y;
        cin >> x >> y;

        ll curr_sum1 = sum, curr_sum2 = sum, ans1 = 0, ans2 = 0;

        ll lo = 0, hi = n - 1, mid, probable1 = -1, absdiff1 = INT64_MAX, probable2 = -1, absdiff2 = INT64_MAX;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;

            if (arr[mid] < x)
            {
                if (abs(arr[mid] - x) < absdiff2)
                    absdiff2 = abs(arr[mid] - x), probable2 = arr[mid];
                lo = mid + 1;
            }
            else
            {
                if (abs(x - arr[mid]) <= absdiff1)
                    probable1 = arr[mid], absdiff1 = abs(x - arr[mid]);
                hi = mid - 1;
            }
        }
        if (probable1 == -1)
            ans1 = INT64_MAX;
        else
        {
            curr_sum1 -= probable1;
            if (y > curr_sum1)
                ans1 += y - curr_sum1;
        }

        // increasing strength
        if (probable2 == -1)
            ans2 = INT64_MAX;
        else
        {
            ans2 += absdiff2;
            curr_sum2 -= probable2;
            if (y > curr_sum2)
                ans2 += y - curr_sum2;
        }

        ans1 = min(ans1, ans2);

        cout << ans1 << endl;
    }

    return 0;
}