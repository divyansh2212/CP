#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<string> strings = {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"};

public:
    int minLength(string s, int n)
    {
        stack<char> st;
        st.push(s[0]);

        for (int i = 1; i < n; i++)
        {
            if (st.size())
            {
                if (s[i] == '2' && st.top() == '1')
                    st.pop();
                else if (s[i] == '1' && st.top() == '2')
                    st.pop();
                else if (s[i] == '3' && st.top() == '4')
                    st.pop();
                else if (s[i] == '4' && st.top() == '3')
                    st.pop();
                else if (s[i] == '5' && st.top() == '6')
                    st.pop();
                else if (s[i] == '6' && st.top() == '5')
                    st.pop();
                else if (s[i] == '7' && st.top() == '8')
                    st.pop();
                else if (s[i] == '8' && st.top() == '7')
                    st.pop();
                else if (s[i] == '0' && st.top() == '9')
                    st.pop();
                else if (s[i] == '9' && st.top() == '0')
                    st.pop();
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        return st.size();
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}