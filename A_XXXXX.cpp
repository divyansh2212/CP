#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        long long total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total_sum += arr[i];
        }
        if (total_sum % x)
        {
            cout << n << endl;
            continue;
        }
        // int ans = sumOfSubArray(arr, x);
        int size = arr.size(), ans = -1;
        long long total = total_sum;
        for (int i = 0; i < n; i++)
        {
            total = total - arr[i];
            if (total % x)
            {
                ans = max(ans, size - i-1);
                break;
            }
        }
        reverse(arr.begin(), arr.end());
        total = total_sum;
        for (int i = 0; i < n; i++)
        {
            total -= arr[i];
            if (total % x)
            {
                ans = max(ans, size - i-1);
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}