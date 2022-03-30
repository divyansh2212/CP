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
        int n, m, k;
        cin >> n >> m >> k;

        if (n <= m - k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}