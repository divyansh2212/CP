// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (n % 3 == 0)
            cout << n / 3 << " " << n / 3 << " " << n / 3 << endl;

        else if (n % 2)
            cout << n / 2 << " " << n / 2 << " " << 1 << endl;

        else if (n % 4 == 2)
            cout << (n - 2) / 2 << " " << (n - 2) / 2 << " " << 2 << endl;

        else
            cout << n / 2 << " " << n / 4 << " " << n / 4 << endl;
    }
    return 0;
}