// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    int n, t, result, k;
    cin >> n >> t;
    cin >> k;

    ll lo = 1, hi = n, mid, pointlast = -1, firstPoint = -1;

    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        cout << "? " << 1 << " " << mid << endl;
        cin >> result;
        int zeroes = mid - result;

        if (zeroes > k)
            hi = mid - 1;
        else if (zeroes < k)
            lo = mid + 1;
        else if (zeroes == k)
            pointlast = mid, hi = mid - 1;
    }

    lo = 1, hi = pointlast;
    while (lo <= hi && lo > 0)
    {
        mid = lo + (hi - lo) / 2;
        cout << "? " << mid << " " << pointlast << endl;
        cin >> result;

        int zeroes = pointlast - mid + 1 - result;

        if (zeroes == k)
            firstPoint = mid, lo = mid + 1;

        else
            lo--;
    }
}
int main()
{
    solve();
    return 0;
}