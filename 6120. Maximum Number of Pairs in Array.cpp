// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> hsh(101, 0);
        vector<int> ans(2, 0);
        for (int i = 0; i < nums.size(); i++)
            hsh[nums[i]]++;

        for (int i = 0; i < 101; i++)
        {
            ans[0] += hsh[i]/2;
            ans[1] += (hsh[i] % 2);
        }
        return ans;
        
    }
};