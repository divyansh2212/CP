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
        ll x;
        cin >> x;

        ll i;
        for (i = 0; i < x; i++)
            if ((i * (i + 1)) / 2 >= x)
                break;

        ll curr = (i * (i + 1)) / 2;
        if (curr - x == 1)
            cout << i + 1 << endl;
        else
            cout << i << endl;
    }
    return 0;
}