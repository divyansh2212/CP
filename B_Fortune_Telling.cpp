#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        long long total_sum = x;
        for (int i = 0; i < n; i++)
        {
            long long num;
            cin >> num;
            total_sum = total_sum ^ num;
        }

        if (y % 2 == 0)
        {
            if (total_sum % 2 == 0)
                cout << "Alice\n";
            else
                cout << "Bob\n";
        }
        else
        {
            if (total_sum % 2)
                cout << "Alice\n";
            else
                cout << "Bob\n";
        }
    }

    return 0;
}