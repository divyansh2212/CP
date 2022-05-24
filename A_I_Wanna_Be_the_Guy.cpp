// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<bool> hsh(n + 1, false);

    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        hsh[x] = true;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        hsh[x] = true;
    }

    bool flag = true;
    for (int i = 1; i < n + 1; i++)
        if (hsh[i] == false)
            flag = false;

    if (flag)
        cout << "I become the guy.";

    else
        cout << "Oh, my keyboard!";

    return 0;
}