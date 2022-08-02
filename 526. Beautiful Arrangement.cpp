// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    void f(vector<int> &arr, int idx, int &ans)
    {
        if (idx == arr.size())
        {
            ans++;
            return;
        }
        for (int i = idx; i < arr.size(); i++)
        {
            if ((arr[i] % (idx + 1) == 0) || ((idx + 1) % arr[i] == 0))
            {
                swap(arr[idx], arr[i]);
                f(arr, idx + 1, ans);
                swap(arr[idx], arr[i]);
            }
        }
    }

public:
    int countArrangement(int n)
    {
        int ans = 0;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            arr[i] = i + 1;

        f(arr, 0, ans);

        return ans;
    }
};