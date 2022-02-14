class Solution {
public:
    
    unordered_map<int, int> hsh;
    int dp[6005][3];
    
    int jumps(int a, int b, int x, long long curr, int type)
    {
        if(curr == x) return 0;
        if(curr < 0) return 1e9;
        if(curr >= 6000) return 1e9;
        if(hsh.find(curr) != hsh.end()) return 1e9;
        if(dp[curr][type] != -1) return dp[curr][type];
        
        int ans = 1e9;
        
        if(type == 0)
        {
            ans = min(ans, jumps(a, b, x, curr + a, 0) + 1);
            ans = min(ans, jumps(a, b, x, curr - b, 1) + 1);
        }
        if(type == 1)
        {
            ans = min(ans, jumps(a, b, x, curr + a, 0) + 1);
        }
        
        return dp[curr][type] = ans;
    }
    
    
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) 
    {
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < forbidden.size(); i++)
            hsh[forbidden[i]]++;
        
        int ans = jumps(a, b, x, 0, 0);
        
        if(ans >= 1e9) return -1;
        
        return ans;
    }
};