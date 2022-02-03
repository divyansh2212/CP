#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        double abc = (a + b + c), avgpqr = (p + q + r) / 2;
        if (abc > avgpqr)
            cout << "YES\n";
        else
        {
            double diffap = p - a, diffbq = q - b, diffrc = r - c;
            if (diffap >= diffbq && diffap >= diffrc)
                a = p;
            else if (diffbq >= diffap && diffbq >= diffrc)
                b = q;
            else
                c = r;
            abc = a + b + c;
            if (abc > avgpqr)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}