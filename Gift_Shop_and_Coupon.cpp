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
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        ll curr = 0, cnt = 0, notbuy = -1;

        for (int i = 0; i < n; i++)
        {
            curr += arr[i];
            if (curr > k)
            {
                notbuy = i;
                curr -= arr[i];
                break;
            }
            cnt++;
        }
        if (notbuy == -1)
            cout << cnt << endl;
        else
        {
            ll new_cost = ceil(arr[notbuy] / 2.0);
            if (new_cost + curr <= k)
                cnt++;
            cout << cnt << endl;
        }
    }
    return 0;
}