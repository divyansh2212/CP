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

        int i = 1;
        int ans = 1;
        int cnt = 0;
        while (i < 1e6)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                cnt++;
                if (cnt == k)
                {
                    cout << i << endl;
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}