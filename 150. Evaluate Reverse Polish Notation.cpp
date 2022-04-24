// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<string> st;

        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i].size() > 1)
                st.push(tokens[i]);
            else if (tokens[i][0] >= '0' && tokens[i][0] <= '9')
                st.push(tokens[i]);
            else
            {
                int val1 = stoi(st.top());
                st.pop();
                int val2 = stoi(st.top());
                st.pop();

                switch (tokens[i][0])
                {
                case '+':
                    st.push(to_string(val2 + val1));
                    break;
                case '-':
                    st.push(to_string(val2 - val1));
                    break;
                case '*':
                    st.push(to_string(val2 * val1));
                    break;
                case '/':
                    st.push(to_string(val2 / val1));
                    break;

                default:
                    break;
                }
            }
        }
        return stoi(st.top());
    }
};