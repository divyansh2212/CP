#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;

        ll square = n * n;

        cout
            << s / square << endl;
    }
    return 0;
}