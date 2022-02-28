#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> subArrays(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = i; j < n; j++)
        {
            temp.push_back(arr[j]);
            ans.push_back(temp);
        }
    }
    return ans;
}

int mex(vector<int> &arr)
{
    int mx = -1;
    map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        mx = max(mx, arr[i]);
        m[arr[i]] = 1;
    }

    for (int i = 0; i < mx + 1; i++)
        if (m[i] == 0)
            return i;

    return mx + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<vector<int>> sub_arrays = subArrays(arr);

        int ans = 0;
        for (int i = 0; i < sub_arrays.size(); i++)
        {
            ans += sub_arrays[i].size();
            ans += mex(sub_arrays[i]);
        }
        cout << ans << endl;
    }
    return 0;
}