#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int hshodd = 0, hsheven = 0;

        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            if (y % 2)
                hshodd++;
            else
                hsheven++;
        }

        bool flag = false;
        for (int odds = 1; odds <= hshodd; odds += 2)
        {
            int evens = x - odds;
            if (odds <= hshodd && evens <= hsheven && evens >= 0)
                flag = true;
        }

        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}