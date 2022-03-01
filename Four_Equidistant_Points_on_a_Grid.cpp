#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int d;
    cin >> d;

    if (d % 2)
        cout << -1 << endl;

    else
    {
        cout << 0 << " " << d / 2 << endl;
        cout << d / 2 << " " << 0 << endl;
        cout << 0 << " " << -1 * d / 2 << endl;
        cout << -1 * d / 2 << " " << 0 << endl;
    }
    return 0;
}