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
        int s, x, y, z;
        cin >> s >> x >> y >> z;

        s -= z;
        if (x + y <= s)
            cout << 0 << endl;

        else if (x <= s || y <= s)
            cout << 1 << endl;

        else
            cout << 2 << endl;
    }
    return 0;
}