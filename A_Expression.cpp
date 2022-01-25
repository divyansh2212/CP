#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int ans = INT_MIN;

    ans = max(max((a + (b * c)), (a * (b + c))), max(a * b * c, (a + b) * c));
    ans = max(ans, max(a + b + c, (a * b) + c));
    cout << ans;
    return 0;
}