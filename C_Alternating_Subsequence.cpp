// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll sum = arr[0], currSign = 0, lastAdded = arr[0];

    if (arr[0] < 0)
        currSign = 1;

    for (int i = 1; i < n; i++)
    {
        if (currSign == 0)
        {
            if (arr[i] < 0)
                sum += arr[i], currSign = 1, lastAdded = arr[i];
            else if (arr[i] > lastAdded)
                sum -= lastAdded,
                    sum += arr[i],
                    lastAdded = arr[i];
        }
        else
        {
            if (arr[i] > 0)
                sum += arr[i], currSign = 0, lastAdded = arr[i];
            else if (arr[i] > lastAdded)
                sum -= lastAdded,
                    sum += arr[i], lastAdded = arr[i];
        }
    }
    cout << sum << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}