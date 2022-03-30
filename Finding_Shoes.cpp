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
        int n, m;
        cin >> n >> m;

        while (m > n)
            m--;

        cout << (2 * n) - m << endl;
    }
    return 0;
}