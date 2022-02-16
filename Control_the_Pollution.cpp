#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        // int pollution = INT_MAX;

        int poll1 = x * (n / 100);
        if (n % 100)
            poll1 += x;

        int poll2 = y * (n / 4);
        if (n % 4)
            poll2 += y;

        int poll3 = x * (n / 100);
        if (n % 100)
        {
            int left_p = n % 100;
            poll3 += y * (left_p / 4);
            if (left_p % 4)
                poll3 += y;
        }

        int poll4 = y * (n / 4);
        if (n % 4)
            poll4 += x;
        cout << min(min(poll1, poll4), min(poll2, poll3)) << endl;
    }
    return 0;
}