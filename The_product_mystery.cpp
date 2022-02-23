#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll b, c;
        cin >> b >> c;

        ll a;
        if (c >= b && c % b == 0)
            a = c / b;
        else
            a = c / __gcd(b, c);

        cout << a << endl;
    }
    return 0;
}