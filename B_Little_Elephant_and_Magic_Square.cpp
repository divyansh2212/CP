#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a1, a2, a3, b1, b2, b3, c1, c2, c3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3;

    b2 = (a2 + a3 + c1 + c2 - b1 - b3) / 2;

    a1 = c1 + c2 - b2;

    c3 = a1 + a2 + a3 - c1 - c2;

    cout << a1 << " " << a2 << " " << a3 << endl;
    cout << b1 << " " << b2 << " " << b3 << endl;
    cout << c1 << " " << c2 << " " << c3 << endl;

    return 0;
}