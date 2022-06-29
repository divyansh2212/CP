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
        for (int i = 0; i < bits; i++)
        {
            if (((a & (1 << i)) == 0) || ((b & (1 << i)) == 0))
                x = (x | (1 << i));
        }
        cout << x << endl;
    }
    return 0;
}