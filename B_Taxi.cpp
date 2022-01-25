#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int hsh[5] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }

    int ans = hsh[4];
    if (hsh[2])
    {
        ans += hsh[2] / 2;
        hsh[2] = hsh[2] % 2;
    }
    if (hsh[1] && hsh[3])
    {
        ans += min(hsh[1], hsh[3]);

        if (hsh[1] < hsh[3])
            hsh[3] = hsh[3] - hsh[1], hsh[1] = 0;

        else if (hsh[3] < hsh[1])
            hsh[1] = hsh[1] - hsh[3], hsh[3] = 0;

        else
            hsh[1] = 0, hsh[3] = 0;
    }
    if (hsh[1])
    {
        ans += hsh[1] / 4;
        hsh[1] = hsh[1] % 4;
    }
    if (hsh[1] && hsh[2])
    {
        if (hsh[1] >= 2)
        {
            hsh[1] -= 2;
            hsh[2]--;
            ans++;
        }
        else if(hsh[1])
        {
            hsh[1] = 0, hsh[2] = 0;
            ans++;
        }
    }
    if (hsh[3])
        ans += hsh[3];
    if (hsh[2])
        ans += hsh[2];
    if (hsh[1])
        ans++;

    cout << ans;
    return 0;
}