#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    vector<int> hsh(N, 0);
    for (int i = 0; i < n; i++)
    {
        if (hsh[arr[i]] == 0)
            count++;
        
        hsh[arr[i]]++;
    }

    vector<int> idx(n);
    idx[0] = count;

    for (int i = 1; i < n; i++)
    {
        if (hsh[arr[i - 1]] - 1 > 0)
        {
            idx[i] = count;
            hsh[arr[i - 1]]--;
        }
        else if (hsh[arr[i - 1]] - 1 <= 0)
        {
            count--;
            hsh[arr[i - 1]]--;
            idx[i] = count;
        }
        // vector<int> copy_arr;
        // copy(arr.begin() + i, arr.end(), back_inserter(copy_arr));
        // sort(copy_arr.begin(), copy_arr.end());
        // int lo = 0, hi = copy_arr.size() - 1, mid;

        // while (hi - lo > 1)
        // {
        //     mid = (hi + lo) / 2;
        //     if (copy_arr[mid] > arr[i - 1])
        //         hi = mid - 1;
        //     else
        //         lo = mid;
        // }
        // if (copy_arr[hi] == arr[i - 1])
        //     idx[i] = count;
        // else if (copy_arr[lo] == arr[i - 1])
        //     idx[i] = count;
        // else
        // {
        //     count--;
        //     idx[i] = count;
        // }
    }

    while (m--)
    {
        int x;
        cin >> x;

        x--;
        cout << idx[x] << endl;
    }

    return 0;
}