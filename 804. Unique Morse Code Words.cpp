// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> codeWords = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
      
        unordered_set<string> ans;
        for (int i = 0; i < words.size(); i++)
        {
            string x = "";
            for (int j = 0; j < words[i].length(); j++)
                x += codeWords[words[i][j] - 'a'];
            ans.insert(x);
        }
        
        return ans.size();
    }
};

