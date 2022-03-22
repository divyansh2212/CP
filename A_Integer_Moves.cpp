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

        if (x == 0 && y == 0)
            cout << 0 << endl;
        else if (x == 0 || y == 0)
            cout << 1 << endl;
        else
        {
            double square = sqrt((x * x) + (y * y));
            if (square == floor(square))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}