// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int ans = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            bool flag = true;
            for (int j = 0; j < arr2.size(); j++)
            {
                if (abs(arr1[i] - arr2[j]) <= d)
                    flag = false;
            }
            if (flag)
                ans++;
        }
        return ans;
    }
};