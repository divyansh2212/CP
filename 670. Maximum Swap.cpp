// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
public:
    int maximumSwap(int num)
    {
        if (num == 0)
            return num;

        string numbers = to_string(num);

        int n = numbers.length(), ans = num;

        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (numbers[j] > numbers[k])
                    continue;
                swap(numbers[j], numbers[k]);
                ans = max(ans, stoi(numbers));
                swap(numbers[j], numbers[k]);
            }
        }

        return ans;
    }
};