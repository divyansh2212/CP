#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        cout << min(min(a, b), (a + b) / 4) << endl;
    }
    return 0;
}