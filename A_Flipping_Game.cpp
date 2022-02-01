#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i])
            cnt++;
    }
    if (cnt == n)
        cout << n - 1;

    else if (arr[0] == 0 && n == 1)
        cout << 1;

    else
    {
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                vector<int> hsh(2, 0);
                for (int k = i; k <= j; k++)
                {
                    if (arr[k])
                        hsh[1]++;
                    else
                        hsh[0]++;
                }
                ans = max(ans, cnt + hsh[0] - hsh[1]);
            }
        }
        cout << ans;
    }
    return 0;
}