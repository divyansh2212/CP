#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

int main()
{
    ll f1, f2, n;
    cin >> f1 >> f2;
    cin >> n;

    ll f3 = f2 - f1, f4 = -f1, f5 = -f2, f6 = f1 - f2;

    if (n % 6 == 0)
    {
        while (f6 < 0)
        {
            f6 = f6 + M;
            if (f6 >= 0)
                break;
        }
        cout << f6 % M;
    }
    if (n % 6 == 1)
    {
        while (f1 < 0)
        {
            f1 = f1 + M;
            if (f1 >= 0)
                break;
        }
        cout << f1 % M;
    }
    if (n % 6 == 2)
    {
        while (f2 < 0)
        {
            f2 = f2 + M;
            if (f2 >= 0)
                break;
        }
        cout << f2 % M;
    }
    if (n % 6 == 3)
    {
        while (f3 < 0)
        {
            f3 = f3 + M;
            if (f3 >= 0)
                break;
        }
        cout << f3 % M;
    }
    if (n % 6 == 4)
    {
        while (f4 < 0)
        {
            f4 = f4 + M;
            if (f4 >= 0)
                break;
        }
        cout << f4 % M;
    }
    if (n % 6 == 5)
    {
        while (f5 < 0)
        {
            f5 = f5 + M;
            if (f5 >= 0)
                break;
        }
        cout << f5 % M;
    }

    return 0;
}