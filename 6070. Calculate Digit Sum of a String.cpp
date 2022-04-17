// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    string digitSum(string s, int k)
    {
        while (1)
        {
            string curr = s;

            if (curr.length() <= k)
                return curr;

            curr.clear();
            for (int i = 0; i < s.length(); i += k)
            {
                int currSum = 0;
                for (int j = i; j < k + i && j < s.length(); j++)
                    currSum += s[j] - '0';
            
                curr += to_string(currSum);
            }

            s = curr;
        }
        return s;
    }
};