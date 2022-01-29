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

        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2 << endl;

        else
        {
            long long a, b, value = INT_MAX;
            set<int> s;
            for (int i = 1; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    s.insert(i);
                    s.insert(n / i);
                }
            }
            s.erase(n);
            for (auto p : s)
            {
                long long val1 = p, val2 = n - p;
                long long lcm = (val1 * val2) / __gcd(val1, val2);
                if (lcm < value)
                    value = lcm, a = val1, b = val2;
            }
            cout << a << " " << b << endl;
        }
    }

    return 0;
}