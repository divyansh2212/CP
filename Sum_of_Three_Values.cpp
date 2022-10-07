// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, int>> arr;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back({x, i + 1});
    }
    
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        ll target = x - arr[i].first;
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            if (arr[j].first + arr[k].first == target)
            {
                cout << arr[i].second << " " << arr[j].second << " " << arr[k].second;
                return;
            }
            else if (arr[j].first + arr[k].first > target)
                k--;
            else
                j++;
        }
    }
    cout << "IMPOSSIBLE";
}
int main()
{
    solve();
    return 0;
}