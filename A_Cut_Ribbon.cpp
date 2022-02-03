#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 1;
    if (a + b + c == n)
        ans = max(ans, 3);
    if (a + b == n || b + c == n || c + a == n)
        ans = max(ans, 2);
    if (n % a == 0)
        ans = max(ans, n / a);
    if (n % (a + b) == 0)
        ans = max(ans, n / (a + b));
    if (n % (b + c) == 0)
        ans = max(ans, n / (b + c));
    if (n % (a + c) == 0)
        ans = max(ans, n / (a + c));
    if (n % (a + b + c) == 0)
        ans = max(ans, n / (a + b + c));
    
    cout << ans;
    return 0;
}