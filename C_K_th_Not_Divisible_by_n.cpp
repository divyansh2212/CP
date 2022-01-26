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
        if (k < n)
            cout << k << endl;
        else
        {
            int xtra = 0;
            if (k / n > 9)
            {
                xtra = (k / n) % 10;
            }
            k += (k / n);
            k += xtra;
            if (k % n == 0)
                k++;
            cout << k << endl;
        }
    }

    return 0;
}