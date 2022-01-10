#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        while (a != 0 && b != 0)
        {
            if (a == b)
            {
                ans++;
                break;
            }
            if (a > b)
            {
                ans += a / b;
                a = a % b;
            }
            else if (b > a)
            {
                ans += b / a;
                b = b % a;
            }
        }
        cout << ans<<endl;
    }

    return 0;
}