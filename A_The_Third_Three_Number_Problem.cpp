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
        int n;
        cin >> n;

        if (n % 2)
            cout << -1 << endl;

        else
        {
            int x = (n / 2) ^ 1;
            cout << x << " " << x << " " << 1 << endl;
        }
    }
    return 0;
}