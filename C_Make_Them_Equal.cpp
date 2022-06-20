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
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        bool flag = true;
        int last = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
                last = i + 1;
            else
                flag = false;
        }

        if (flag)
            cout << 0 << endl;

        else if (last > (n / 2))
            cout << "1\n"
                 << last << endl;

        else
            cout << "2\n"
                 << n - 1 << " " << n << endl;
    }
    return 0;
}