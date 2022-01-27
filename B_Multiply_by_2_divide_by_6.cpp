#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int moves = 0;
        bool flag = true;
        while (n != 1)
        {
            if (n % 6 == 0)
                n = n / 6;

            else if (n % 3 == 0)
                n = n * 2;

            else
            {
                flag = false;
                break;
            }
            moves++;
        }
        if (flag)
            cout << moves << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}