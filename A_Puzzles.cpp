#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int diff = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        int curr_min = INT_MAX, curr_max = INT_MIN;
        if (i + n > m)
            break;
        for (int j = i, k = 0; j < m, k < n; j++, k++)
        {
            curr_min = min(curr_min, arr[j]);
            curr_max = max(curr_max, arr[j]);
        }
        diff = min(curr_max - curr_min, diff);
    }
    cout << diff;
    return 0;
}