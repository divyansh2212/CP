// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int idx, idy;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
                idx = i, idy = j;
        }
    }

    cout << abs(idx - 2) + abs(idy - 2);

    return 0;
}