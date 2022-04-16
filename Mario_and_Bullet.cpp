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
        int x, y, z;
        cin >> x >> y >> z;

        int time = y / x;

        int reqdtime = z - time;

        if (reqdtime <= 0)
            reqdtime = 0;

        cout << reqdtime << endl;
    }
    return 0;
}