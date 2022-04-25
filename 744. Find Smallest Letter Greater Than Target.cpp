// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int lo = 0, hi = letters.size() - 1, mid;

        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            if (letters[mid] <= target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        return letters[lo % letters.size()];
    }
};