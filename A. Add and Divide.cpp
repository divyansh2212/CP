#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = INT_MAX;
        for (long long i = 0; i * i <= a; i++)
        {
            if (b + i == 1)
                continue;
            int curr = i;
            int a_copy = a;
            while (a_copy)
            {
                a_copy /= (b + i);
                curr++;
            }
            ans = min(ans, curr);
        }
        cout << ans << endl;
    }

    return 0;
}