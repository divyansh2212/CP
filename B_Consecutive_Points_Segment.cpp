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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        bool flag = true, move = false;
        for (int i = 1; i < n; i++)
        {
            int gap = arr[i] - arr[i - 1];
            if (gap == 1)
                continue;
            else if (gap == 2 && move == false)
                move = true;

            else if (gap == 2)
                arr[i]--;

            else if (gap == 3)
            {
                if (move == false)
                    move = true, arr[i] = arr[i] - 1;
                else
                    flag = false;
            }
            else
                flag = false;
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}