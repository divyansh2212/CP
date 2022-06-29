// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

unsigned int getFirstSetBitPos(int n)
{
    return log2(n & -n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int odds = 0, evens = 0;
        vector<int> bits;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            if (x % 2)
                odds++;
            else
            {
                bits.push_back(getFirstSetBitPos(x));
                evens++;
            }
        }

        if (odds >= evens)
            cout << odds - n << endl;

        else
        {
            sort(bits.begin(), bits.end());
            int ans = 0;
            for (int i = 0; i < n - odds; i++)
                ans += bits[i];

            cout << ans << endl;
        }
    }
    return 0;
}