// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (n == 1 || k == 2)
            cout << "ODD\n";

        else if (k == 1)
        {
            if (n % 2)
                cout << "ODD\n";
            else
                cout << "EVEN\n";
        }

        else
        {
            if (n >= k)
                n = k - 1;

            if (k % n == 0)
                n--;

            if (n % 2)
            {
                if (k % 2 == 0)
                    cout << "EVEN\n";
                else
                    cout << "ODD\n";
            }
            else
            {
                if (k % 2 == 0)
                    cout << "ODD\n";
                
            }
        }
    }
    return 0;
}