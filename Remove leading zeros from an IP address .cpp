// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string newIPAdd(string s)
    {
        s += '.';
        string ans = "";
        vector<string> ids;
        int n = s.length();

        int i = -1;
        string curr = "";
        while (i < n)
        {
            i++;
            if (s[i] != '.')
                curr.push_back(s[i]);
            else
            {
                ids.push_back(curr);
                curr.clear();
            }
        }
        ids.push_back(curr);

        for (int i = 0; i < ids.size(); i++)
        {
            bool flag = true;
            curr.clear();
            for (int j = 0; j < ids[i].length(); j++)
            {
                if (ids[i][j] == '0' && flag)
                    continue;
                else
                {
                    flag = false;
                    ans.push_back(ids[i][j]);
                    curr.push_back(ids[i][j]);
                }
            }
            if (curr.empty())
                ans.push_back('0');
            ans.push_back('.');
        }
        ans.pop_back();
        ans.pop_back();
        ans.pop_back();

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.newIPAdd(s) << endl;
    }
}