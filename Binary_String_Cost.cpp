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
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;

        bool zeroes = false, ones = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeroes = true;
            if (s[i] == '1')
                ones = true;
        }

        if (zeroes == false || ones == false)
            cout << 0 << endl;
        else if (x <= y)
            cout << x << endl;
        else
            cout << y << endl;
    }
    return 0;
}