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
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        if (w + (y * z) == x)
            cout << "filled\n";
        else if (w + (y * z) < x)
            cout << "Unfilled\n";
        else
            cout << "overFlow\n";
    }
    return 0;
}