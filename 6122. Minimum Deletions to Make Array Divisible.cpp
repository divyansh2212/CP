// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
    int findGCD(vector<int> &arr)
    {
        int result = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            result = gcd(arr[i], result);

            if (result == 1)
                return 1;
        }
        return result;
    }

public:
    int minOperations(vector<int> &nums, vector<int> &numsDivide)
    {
        sort(nums.begin(), nums.end());

        unordered_map<int, int> hsh;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            hsh[nums[i]] = i;
        }

        int gcd = findGCD(numsDivide);

        vector<int> fctors;

        for (int i = 1; i * i <= gcd; i++)
        {
            if (gcd % i == 0)
            {
                fctors.push_back(i);
                if (i != (gcd / i))
                    fctors.push_back(gcd / i);
            }
        }
        sort(fctors.begin(), fctors.end());

        for (int i = 0; i < fctors.size(); i++)
        {
            if (hsh.find(fctors[i]) != hsh.end())
                return hsh[fctors[i]];
        }

        return -1;
    }
};