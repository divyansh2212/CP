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
        int n, a, b;
        cin >> n >> a >> b;

        int bits = log2(pow(2, n));

        int x = 0;
        bool flag = true;
        for (int i = bits - 1; i >= 0; i--)
        {
            if (((a & (1 << i)) == 0) && ((b & (1 << i)) == 0))
                x = (x | (1 << i));
            else if (((a & (1 << i)) == 0) && flag)
            {
                flag = false;
                x = (x | (1 << i));
            }
            else if (((b & (1 << i)) == 0))
                x = (x | (1 << i));
        }
        cout << x << endl;
    }
    return 0;
}