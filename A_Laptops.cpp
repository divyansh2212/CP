#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        m[x] = y;
    }

    int i = 0;
    bool flag = false;
    int prevquality = 0, prevprice = 0;
    for (auto mp : m)
    {
        if (i == 0)
        {
            prevquality = mp.second, prevprice = mp.first;
            i++;
            continue;
        }
        if (mp.second < prevquality && mp.first != prevprice)
        {
            flag = true;
            break;
        }
        if (mp.second > prevquality)
        {
            prevquality = mp.second;
            prevprice = mp.first;
        }
    }

    if (flag)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";

    return 0;
}