#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int hshOdds = 0, hshEvens = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                hshEvens++;
            else
                hshOdds++;
        }
        if (n % 2)
        {
            cout << "NO\n";
            continue;
        }
        if (hshEvens % 2 == 0 && hshOdds % 2 == 0)
        {
            cout << "YES\n";
            continue;
        }
        sort(arr.begin(), arr.end());
        bool flag = false;
        
        for (int i = 0; i < n - 1; i++)
            if (abs(arr[i] - arr[i + 1]) == 1)
                flag = true;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}