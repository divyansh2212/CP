#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int lo = 0, hi = letters.size() - 1, mid;

        while (hi - lo > 1)
        {
            mid = (hi + lo) / 2;
            if (letters[mid] < target)
                lo = mid + 1;
            else
                hi = mid;
        }

        if (letters[lo] > target)
            return letters[lo];
        if (letters[hi] > target)
            return letters[hi];
        return target;
    }
};