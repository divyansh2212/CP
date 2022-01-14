#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, l, r, k;
        cin >> n >> l >> r >> k;
        vector<long long> arr(n);

        for (long long i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= l && arr[i] <= r)
            {
                sum += arr[i];
                if (sum > k)
                    break;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}