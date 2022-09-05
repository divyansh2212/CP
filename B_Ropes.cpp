// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<int> &arr, double mid, int &k)
{
    ll curr = 0;
    for (int i = 0; i < arr.size(); i++)
        curr += (ll)(arr[i] / mid);

    return (curr >= k);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    double lo = 0, hi = 1e18, mid;

    while (hi - lo > 1e-6)
    {
        mid = (lo + hi) / 2;
        if (check(arr, mid, k))
            lo = mid;
        else
            hi = mid;
    }

    cout << setprecision(8) << lo << endl;
}
int main()
{
    solve();
    return 0;
}