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
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int lastele = arr[n - 1], cnt = 0, i = n - 1, steps = 0;

        while (i >= 0)
        {
            while (arr[i] == lastele)
            {
                i--, cnt++;
            }
            if (i < 0)
                break;
            steps++;
            i = i - cnt;
            cnt = 2 * cnt;
        }

        cout << steps << endl;
    }

    return 0;
}