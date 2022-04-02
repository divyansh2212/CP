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
        int n, a, b;
        cin >> n >> a >> b;

        if (abs(a - b) == 2)
            cout << 1 << endl;
        else if (abs(a - b) == 1)
        {
            if (a == 1 || b == 1 || a == n || b == n)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}