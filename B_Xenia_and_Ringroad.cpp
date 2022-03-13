#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> arr(m);
    for (ll i = 0; i < m; i++)
        cin >> arr[i];

    ll currpos = 1, time = 0;

    for (ll i = 0; i < m; i++)
    {
        if (arr[i] >= currpos)
            time += (arr[i] - currpos);
        else if (arr[i] < currpos)
        {
            time += (n - currpos);
            time += arr[i];
        }
        currpos = arr[i];
    }
    cout << time;

    return 0;
}