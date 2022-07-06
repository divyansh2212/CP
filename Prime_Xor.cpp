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
        ll x, y;
        cin >> x >> y;

        ll z = x ^ y;

        ll a, b, c;
        if ((x % 2) && (y % 2))
        {
            b = 2;
            a = x ^ b;
            c = y ^ b;
        }
        if ((y % 2) && (z % 2))
        {
            c = 2;
            a = z ^ c;
            b = y ^ c;
        }
        if ((x % 2) && (z % 2))
        {
            a = 2;
            b = x ^ a;
            c = z ^ a;
        }

        vector<ll> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);

        sort(arr.begin(), arr.end());

        for (int i = 0; i < 3; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
    return 0;
}