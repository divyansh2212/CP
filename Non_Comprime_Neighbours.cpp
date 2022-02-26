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

        if (n == 3)
            arr[0] = 2 * arr[1], arr[2] = 2 * arr[1];
    
        else
        {
            arr[1] = 2 * arr[0];

            int i = 3;
            while (i + 1 < n)
            {
                arr[i - 1] = 2 * arr[i];
                arr[i + 1] = 2 * arr[i];
                i = i + 3;
            }

            if (__gcd(arr[n - 1], arr[n - 2]) == 1)
                arr[n - 2] = 2 * arr[n - 1];
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}