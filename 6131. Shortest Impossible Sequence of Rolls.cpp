// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        int ans = k;
        vector<int> hsh(k + 1, 0);
        for (int i = 0; i < rolls.size(); i++)
            hsh[rolls[i]]++;
        
        for (int i = 1; i < k + 1; i++)
            if(hsh[i]==0)
            return 1;
        
        
        
        
    }
};