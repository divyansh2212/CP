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

        if ((x % 2 && y % 2) || x == 1 || y == 1)
            cout << -1 << endl;

        else if (x % 2 == 0 && y % 2 == 0)
        {
            int sz = x + y;
            vector<char> str(sz);

            for (int i = 0; i < (sz) / 2; i++)
            {
                if (x > 0)
                {
                    str[i] = 'a', str[sz - 1 - i] = 'a';
                    x -= 2;
                }
                else if (y > 0)
                {
                    str[i] = 'b', str[sz - 1 - i] = 'b';
                    y -= 2;
                }
            }

            for (int i = 0; i < sz; i++)
                cout << str[i];
            cout << endl;

            swap(str[0], str[(sz - 1) / 2]);
            swap(str[sz - 1], str[sz / 2]);

            for (int i = 0; i < sz; i++)
                cout << str[i];
            cout << endl;
        }

        else
        {
            int sz = x + y;
            vector<char> str(sz);

            if (x % 2)
                str[sz / 2] = 'a', x--;
            else
                str[sz / 2] = 'b', y--;
            for (int i = 0; i < (sz) / 2; i++)
            {
                if (x > 0)
                {
                    str[i] = 'a', str[sz - 1 - i] = 'a';
                    x -= 2;
                }
                else if (y > 0)
                {
                    str[i] = 'b', str[sz - 1 - i] = 'b';
                    y -= 2;
                }
            }

            for (int i = 0; i < sz; i++)
                cout << str[i];
            cout << endl;

            swap(str[0], str[((sz - 1) / 2) - 1]);
            swap(str[sz - 1], str[((sz - 1) / 2) + 1]);

            for (int i = 0; i < sz; i++)
                cout << str[i];
            cout << endl;
        }
    }
    return 0;
}