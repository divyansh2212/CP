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
        ll n;
        cin >> n;

        int bits = log2(n) + 1;

        cout << n - bits << endl;
    }
    return 0;
}