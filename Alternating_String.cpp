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

        string s;
        cin >> s;

        int ones = 0, zeroes = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeroes++;
            else
                ones++;
        }
        cout << min(n, 2 * min(ones, zeroes) + 1) << endl;
    }
    return 0;
}