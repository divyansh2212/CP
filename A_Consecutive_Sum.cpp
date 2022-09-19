// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> arr(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> arr[i];
    }

    ll i = 1;

    while (i <= k)
    {
        vector<int> curr;
        for (int j = i; j < n + 1; j += k)
            curr.push_back(arr[j]);

        sort(curr.begin(), curr.end());
        reverse(curr.begin(), curr.end());

        int x = 0;
        for (int j = i; j < n + 1; j += k)
            arr[j] = curr[x++];

        i++;
    }

    ll maxsum = 0, currsum = 0,  j = 1;
    i = 1;

    while (j <= n)
    {
        currsum += arr[j];
        if (j - i + 1 == k)
        {
            maxsum = max(maxsum, currsum);
            currsum -= arr[i];
            i++;
        }
        j++;
    }

    cout << maxsum << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}