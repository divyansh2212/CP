#include <bits/stdc++.h>
using namespace std;

int func(int a, int b, int curr)
{
    if (a == b)
        return curr;
    if (a >= 1000000 || b >= 1000000)
        return 1000000;

    int ways = 1000000;
    ways = min(ways, func(a, b, curr));
    ways = min(ways, func(a | b, b, curr + 1));
    ways = min(ways, func(a, b + 1, curr + 1));

    return ways;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if ((a | b) == b)
        {
            cout << 1 << endl;
            continue;
        }

        int ways = b - a;

        int op = 0;
        while (op < 10000)
        {
            b = b + 1;
            op++;
            if ((a | b) == b)
            {
                op++;
                break;
            }
        }
        cout << min(ways, op) << endl;
    }
    return 0;
}