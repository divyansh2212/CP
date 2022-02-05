#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        stack<int> st;
        st.push(arr[0]);
        int i = 1;

        while (i < n)
        {
            int top = st.top();
            if (top > 0 && arr[i] > 0)
            {
                st.pop();
                st.push(max(top, arr[i]));
            }
            else if (top < 0 && arr[i] < 0)
            {
                st.pop();
                st.push(max(top, arr[i]));
            }
            else
                st.push(arr[i]);
            i++;
        }

        long long sum = 0;
        while (!st.empty())
        {
            int top = st.top();
            sum += top;
            st.pop();
        }
        cout << sum << endl;
    }

    return 0;
}