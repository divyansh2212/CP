#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll total_sum = accumulate(arr.begin(), arr.end(), 0LL);
        ll mac1 = 0, mac2 = total_sum;
        ll time = total_sum;

        for (int i = 0; i < n; i++)
        {
            mac1 += arr[i];
            mac2 -= arr[i];
            time = min(time, max(mac1, mac2));
        }

        cout << time << endl;
    }
    return 0;
}