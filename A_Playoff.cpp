#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll participants = (1 << n);
        cout << participants - 1 << endl;
    }
    return 0;
}