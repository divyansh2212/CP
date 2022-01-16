// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string solve(int N, string S)
    {
        if (S.length() == 1)
            return S;
        string ans = "", curr_str = "";
        int curr_len = 0, len = 0;
        curr_str.push_back(S[0]);
        for (int i = 1; i < N; i++)
        {
            if (S[i] > curr_str[curr_str.length() - 1])
            {
                curr_str.push_back(S[i]);
                // ans = curr_str;
                curr_len++;
                len = max(curr_len, len);
            }
            else
            {
                if (ans > curr_str || ans == "")
                {
                    if (curr_str.length() >= ans.length())
                        ans = curr_str;
                }
                curr_str = "";
                curr_len = 0;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        string S;
        cin >> N >> S;
        Solution ob;
        cout << ob.solve(N, S) << "\n";
    }
    return 0;
}
// } Driver Code Ends