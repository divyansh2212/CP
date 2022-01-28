#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if ((n % 2 == 0 && k % 2 != 0) || (n % 2 != 0 && k % 2 == 0))
            cout << "NO\n";

        else
        {
            if (k > sqrt(n))
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}