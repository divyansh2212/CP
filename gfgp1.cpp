// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool palindromicArray(vector<int> &a, int n, int k)
    {
        int i = 0, j = n - 1;

        while (i <= j)
        {
            if (a[i] == a[j])
            {
                i++;
                j--;
            }
            else
            {
                if (a[i] == k)
                    i++;
                else if (a[j] == k)
                    j--;
                else
                    return false;
            }
        }

        return true;
    }
};

// { Driver Code Starts.
