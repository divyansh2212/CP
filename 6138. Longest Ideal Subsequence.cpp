// Jai Shree Babosa!

class Solution
{
public:
    int longestIdealString(string s, int k)
    {
        int n = s.length();
        vector<int> next(27, 0);

        for (int idx = n - 1; idx >= 0; idx--)
        {
            vector<int> curr(27, 0);
            for (int last = 26; last >= 0; last--)
            {
                int pick = 0, notpick = 0;

                notpick = next[last];

                if (abs(s[idx] - 'a' + 1 - last) <= k || last == 0)
                    pick = 1 + next[s[idx] - 'a' + 1];

                curr[last] = max(pick, notpick);
            }
            next = curr;
        }

        return next[0];
    }
};