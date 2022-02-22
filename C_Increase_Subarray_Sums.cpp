#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxSubArraySum(vector<int> &arr)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < arr.size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max(0, max_so_far);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        int mx = INT_MIN, idx;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > mx)
                mx = arr[i], idx = i;
        }

        vector<int> ans;
        int f = maxSubArraySum(arr);
        ans.push_back(f);
        for (int i = 1; i <= n; i++)
        {
            vector<int> c_arr = arr;
            if (i == 1)
            {
                c_arr[idx] += x;
                ans.push_back(maxSubArraySum(c_arr));
            }
        }
    }
    return 0;
}