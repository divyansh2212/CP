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
        int r;
        cin >> r;
        cout << "Division ";
        if (r >= 1900)
            cout << 1;
        else if (r >= 1600 && r <= 1899)
            cout << 2;
        else if (r >= 1400 && r <= 1599)
            cout << 3;
        else
            cout << 4;
        cout << endl;
    }
    return 0;
}