// DONE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 0)
        cout << n;
    else
    {
        int n_copy = -1 * n;
        int last_digit = n_copy % 10;
        n_copy = n_copy / 10;
        int scnd_last = n_copy % 10;
        if (last_digit >= scnd_last)
            cout << n / 10 << endl;
        else
        {
            n = ((n / 100) * 10) - last_digit;
            cout << n << endl;
        }
    }
    return 0;
}