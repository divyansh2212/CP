// DONE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= n / 2; i++)
        {
            int a = i;
            int b = n - 1 - a;
            if (__gcd(a, b) == 1 && b != 1 && a != b)
            {
                cout << a << " " << b << " " << 1 << endl;
                break;
            }
        }
    }

    return 0;
}