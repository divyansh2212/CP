// <-------------------- Jai Shree Babosa -------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;

    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }
    cout << 1 << " ";
}
int main()
{
    solve();
    return 0;
}