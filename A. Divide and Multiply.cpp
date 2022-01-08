#include <bits/stdc++.h>
using namespace std;

long long binExp(long long a, int b)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ans * a;
        a = a * a;
        b = (b >> 1);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n == 1)
        {
            cout << arr[0] << endl;
            continue;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            while (arr[i] % 2 == 0)
            {
                arr[i] = arr[i] / 2;
                cnt++;
            }
        }
        int idx;
        long long mx = -1;
        for (int i = 0; i < n; i++)
        {
            if (mx < arr[i])
            {
                mx = max(mx, arr[i]);
                idx = i;
            }
        }
        arr[idx] = arr[idx] * binExp(2, cnt);
        long long sum = 0;
        // long long sum = accumulate(arr.begin(), arr.end(), 0);
        for (int i = 0; i < n; i++)
            sum += arr[i];

        printf("%lld\n", sum);
    }

    return 0;
}