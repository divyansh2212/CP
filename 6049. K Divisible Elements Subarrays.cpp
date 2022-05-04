// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void printSubArrays(vector<int> &arr, int start, int end, vector<vector<int>> &subArrays, int p, int k)
    {
        if (end == arr.size())
            return;
        else if (start > end)
            printSubArrays(arr, 0, end + 1, subArrays, p, k);
        else
        {
            vector<int> curr;
            int count = 0;
            for (int i = start; i <= end; i++)
            {
                if (arr[i] % p == 0)
                    count++;
                curr.push_back(arr[i]);
            }
            if (count <= k)
                subArrays.push_back(curr);
            printSubArrays(arr, start + 1, end, subArrays, p, k);
        }
        return;
    }

    int countDistinct(vector<int> &nums, int k, int p)
    {
        vector<vector<int>> subArrays;
        printSubArrays(nums, 0, 0, subArrays, p, k);

        int ans = subArrays.size();

        sort(subArrays.begin(), subArrays.end());

        for (int i = 1; i < subArrays.size(); i++)
            if (subArrays[i] == subArrays[i - 1])
                ans--;

        return ans;
    }
};