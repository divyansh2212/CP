#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n == k)
        {
            for (int i = 0; i < n; i++)
                cout << i + 1 << " ";
        }
        else if (k == 1)
            cout << -1;
        else
        {
            int size = n;
            int arr[n];
            int cnt = 1;
            for (int i = size - k + 1; i < n; i++)
            {
                arr[i] = cnt;
                cnt++;
            }
            for (int i = 0; i < size - k + 1; i++)
            {
                arr[i] = cnt;
                cnt++;
            }
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}