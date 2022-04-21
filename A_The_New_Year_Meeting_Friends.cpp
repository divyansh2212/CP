// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int ans = INT_MAX;

    ans = min(ans, abs(x1 - x2) + abs(x1 - x3));
    ans = min(ans, abs(x1 - x2) + abs(x2 - x3));
    ans = min(ans, abs(x1 - x3) + abs(x2 - x3));

    cout << ans;

    return 0;
}