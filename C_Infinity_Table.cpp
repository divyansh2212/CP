#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;

        int to_sub = 1, i = 1;
        int ansi, ansj;

        while (1)
        {
            k -= to_sub;
            if (k <= 0)
            {
                ansi = i, ansj = i;
                break;
            }
            to_sub += 2;
            i++;
        }

        k += to_sub;

        if (k == (to_sub / 2) + 1)
            cout << ansi << " " << ansj << endl;
        else
        {
            if (k <= (to_sub / 2))
                ansi = k;
            if (k > (to_sub / 2) + 1)
                ansj -= k - i;
            cout << ansi << " " << ansj << endl;
        }
    }
    return 0;
}