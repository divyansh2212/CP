// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> piles(n);
    for (int i = 0; i < n; i++)
        cin >> piles[i];

    bool flag = false;
    int pile = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        pile = min(piles[i], pile);
        for (int j = i + 1; j < n; j++)
        {
            if (abs(piles[i] - piles[j]) > k)
                flag = true;
        }
    }

    if (flag)
        cout << "NO";

    else
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            int extra = 1;
            for (int j = 1; j <= piles[i]; j++)
            {
                if (j <= pile + 1)
                    cout << 1 << " ";
                else
                    cout << ++extra << " ";
            }
            cout << endl;
        }
    }

    return 0;
}