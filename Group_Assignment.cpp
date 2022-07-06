
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

        vector<int> hsh(1 + n, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            hsh[x]++;
        }

        bool flag = true;
        for (int i = 1; i < n + 1; i++)
        {
            if (hsh[i] != 0 && hsh[i] % i)
                flag = false;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}