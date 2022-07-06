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

        if(y > x)
        cout << y - x << endl;
        else cout << 0 << endl;
    }
    return 0;
}