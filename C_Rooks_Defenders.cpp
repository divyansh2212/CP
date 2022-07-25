// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, q;
    cin >> n >> q;

    map<int, int> mprow;
    map<int, int> mpcol;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x, y;
            cin >> x >> y;
            mprow[x]++, mpcol[y]++;
        }
        else if (t == 2)
        {
            int x, y;
            cin >> x >> y;
            mprow[x]--, mpcol[y]--;
        }
        else
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            bool flag = true;
            for (int i = x1; i <= x2 && flag; i++)
                if (mprow[i] == 0)
                    flag = false;
            if (flag)
            {
                cout << "Yes\n";
                continue;
            }
            for (int i = y1; i <= y2 && flag; i++)
                if (mpcol[i] == 0)
                    flag = false;

            if (flag)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}