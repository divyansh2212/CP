// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;

    ll initial = 1, ans = 0; 

    while (initial < n)
    {
        if (k == 1)
            break;
        initial += k;
        initial--;
        k--;
        ans++;
    }
    if (initial < n)
        ans = -1;
    cout << ans;

    return 0;
}