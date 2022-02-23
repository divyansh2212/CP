#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> sub_arrays(n + 1, INT_MIN);
        sub_arrays[0] = 0;

        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = i; j < n; j++)
            {
                temp += arr[j];
                sub_arrays[j - i + 1] = max(sub_arrays[j - i + 1], temp);
            }
        }

        for (int k = 0; k < n + 1; k++)
        {
            int temp = 0;
            for (int i = 0; i < n + 1; i++)
                temp = max(temp, min(k, i) * x + sub_arrays[i]);
            cout << temp << " ";
        }
        cout << endl;
    }
    return 0;
}