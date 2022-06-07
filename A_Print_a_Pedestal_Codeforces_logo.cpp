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
        int n;
        cin >> n;

        int h2 = 2, h1 = 3, h3 = 1;
        n -= 6;

        int to_add = n / 3;
        h2 += to_add, h1 += to_add, h3 += to_add;

        int rem = n % 3;

        if (rem == 2)
        {
            if (h1 - h2 > 2)
                h2 += 2;
            else
                h1++, h2++;
        }
        if (rem == 1)
        {
            if (h1 - h2 > 1)
                h2++;
            else
                h1++;
        }

        cout << h2 << " " << h1 << " " << h3 << endl;
    }
    return 0;
}