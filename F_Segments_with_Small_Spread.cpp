// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll currMin = arr[0], currMax = arr[0], i = 0, j = 0, ans = 0;

    while (j < n)
    {
        currMax = arr[j];

        while (currMax - currMin > k)
        {
            ll len = (j - 1 - i + 1);
            ans += ((len * (len + 1)) / 2);
            i++;
            currMin = arr[i];
        }
        j++;
    }
    cout << ans;
}
 
int main()
{
    solve();
    return 0;
}