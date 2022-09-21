// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, s;
    cin >> n >> s;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll i = 0, j = 0, currSum = 0, ans = 0, len;

    while (j < n)
    {
        currSum += arr[j];
        len = j - i + 1;
        if (currSum <= s)
            ans += (len * (len + 1)) / 2;

        while (currSum > s)
        {
            currSum -= arr[i];
            len = j - i;
            if (currSum <= s)
                ans += (len * (len + 1) / 2);
            i++;
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