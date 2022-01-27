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
            int to_add = k / n;
            int new_to_add;
            while (1)
            {
                new_to_add = (to_add + k) / n;
                if (to_add == new_to_add)
                    break;
                to_add = new_to_add;
            }
            if ((k + new_to_add) % n == 0)
                cout << k + new_to_add + 1 << endl;
            else
                cout << k + new_to_add << endl;
        }
    }

    return 0;
}