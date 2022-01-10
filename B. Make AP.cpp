// DONE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == b && b == c) || (b - a == c - b))
        {
            cout << "YES\n";
            continue;
        }
        int lhs = 2 * b;
        int rhs = a + c;
        if (lhs < rhs)
        {
            if (rhs % lhs == 0)
            {
                cout << "YES\n";
                continue;
            }
        }
        else if (lhs > rhs)
        {
            int lhs_copy = lhs;
            lhs_copy = lhs_copy - a;
            if (lhs_copy != 0 && lhs_copy % c == 0)
            {
                cout << "YES\n";
                continue;
            }
            lhs_copy = lhs;
            lhs_copy = lhs_copy - c;
            if (lhs_copy != 0 && lhs_copy % a == 0)
            {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }

    return 0;
}