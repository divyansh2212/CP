#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(2 * n);
        int mx = INT_MIN;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        sort(arr.begin(), arr.end());

        vector<int> arr1;
        vector<int> arr2;

        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2)
                arr1.push_back(arr[i]);
            else
                arr2.push_back(arr[i]);
        }

        vector<int> hsh1(N, 0);
        vector<int> hsh2(N, 0);

        for (int i = 0; i < n; i++)
        {
            hsh1[arr1[i]]++;
            hsh2[arr2[i]]++;
        }

        int msgNum1 = -1, msgNum2 = -1;
        for (int i = 0; i < mx + 2; i++)
        {
            if (hsh1[i] == 0)
            {
                msgNum1 = i;
                break;
            }
        }
        for (int i = 0; i < mx + 2; i++)
        {
            if (hsh2[i] == 0)
            {
                msgNum2 = i;
                break;
            }
        }
        if (msgNum1 == msgNum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}