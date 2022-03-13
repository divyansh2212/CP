#include <bits/stdc++.h>
using namespace std;
#define ll long long

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        ll lo = 1, hi = n, mid;

        while (hi - lo > 1)
        {
            mid = (hi + lo) / 2;
            if (guess(mid) == -1)
                hi = mid - 1;
            else
                lo = mid;
        }
        if(guess(hi) == 0) return hi;
        if(guess(lo) == 0) return lo;
        
        return n;
    }
};