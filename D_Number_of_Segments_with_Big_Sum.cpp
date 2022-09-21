// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, s, currSum = 0, ans = 0;
    cin >> n >> s;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0, j = 0;

    while (j < n)
    {
        currSum += arr[j];
        while (currSum >= s && i <= j)
        {
            ans += (n - 1 - j + 1);
            currSum -= arr[i];
            i++;
        }
        j++;
    }

    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}