// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int n = numbers.size();

        for (int i = 0, j = n - 1; i < j; i++)
        {
            while (numbers[i] + numbers[j] < target)
                i++;
            if (numbers[i] + numbers[j] == target)
                return {i + 1, j + 1};
            while (numbers[i] + numbers[j] > target)
                j--;
            if (numbers[i] + numbers[j] == target)
                return {i + 1, j + 1};
        }

        return {};
    }
};