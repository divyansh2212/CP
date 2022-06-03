// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dfs(ll idx, ll curr_time, ll &k, vector<ll> &mushrooms)
{
    if (idx < 0 || idx >= mushrooms.size() || curr_time == k)
        return 0;

    ll way1 = mushrooms[idx] + curr_time, way2 = mushrooms[idx] + curr_time;
    mushrooms[idx] = 0;

    way1 += dfs(idx + 1, curr_time + 1, k, mushrooms);
    way2 += dfs(idx - 1, curr_time + 1, k, mushrooms);

    return max(way1, way2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> mushrooms(n);
        ll mx = INT_MIN, idx;
        for (ll i = 0; i < n; i++)
        {
            cin >> mushrooms[i];
            if (mushrooms[i] > mx)
                mx = mushrooms[i], idx = i;
        }

        // sort(mushrooms.begin(), mushrooms.end());
        // reverse(mushrooms.begin(), mushrooms.end());
        
       
    }
    return 0;
}