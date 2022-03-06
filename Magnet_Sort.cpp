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
        vector<char> polarities(n);

        int mx = -1, idx, idx1, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mx < arr[i])
            {
                idx = i;
                mx = arr[i];
            }
            if (mn >= arr[i])
            {
                idx1 = i;
                mn = arr[i];
            }
        }
        int cntS = 0, cntN = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> polarities[i];
            if (polarities[i] == 'N')
                cntN = 1;
            else
                cntS = 1;
        }

        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        if (sorted == arr)
            cout << 0 << endl;
        else if (polarities[0] != polarities[n - 1])
            cout << 1 << endl;
        else if (cntS == 0 || cntN == 0)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            bool flag = false;

            for (int i = 1; i < n; i++)
            {
                vector<int> cop_arr = arr;
                if (polarities[0] != polarities[i])
                {
                    sort(cop_arr.begin(), cop_arr.begin() + i + 1);
                    if (cop_arr == sorted)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag)
            {
                cout << 1 << endl;
                continue;
            }
            for (int i = n - 2; >= 0; i--)
            {
                vector<int> cop_arr = arr;
                if (polarities[n - 1] != polarities[i])
                {
                    sort(cop_arr.begin() + i + 1, cop_arr.end());
                    if (cop_arr == sorted)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag)
            {
                cout << 1 << endl;
                continue;
            }
            cout << 2 << endl;
        }
    }
    return 0;
}