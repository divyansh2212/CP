#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;

    ll ans = ceil(sqrt((abs(x - x1)*abs(x - x1) + abs(y - y1)*abs(y - y1))) / (2.0 * r));

    cout << ans;    

    return 0;
}