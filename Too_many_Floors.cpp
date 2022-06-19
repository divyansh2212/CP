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
        int x, y;
        cin >> x >> y;

        if (x % 10 == 0)
            x = (x / 10);
        else
            x = (x / 10) + 1;
        if (y % 10 == 0)
            y = (y / 10);
        else
            y = (y / 10) + 1;

        cout << abs(x - y) << endl;
    }
    return 0;
}