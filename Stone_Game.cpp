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
        string s1, s2;
        cin >> s1;
        cin >> s2;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        reverse(s2.begin(), s2.end());

        vector<char> ans(2 * n);

        int startA = 0, endA = n - 1;
        int startB = 0, endB = n - 1;

        int ansStart = 0, ansEnd = 2 * n - 1;

        for (int i = 0; i < 2 * n; i++)
        {
            if ((i % 2) == 0)
            {
                if (s1[startA] < s2[startB])
                {
                    ans[ansStart] = s1[startA];
                    startA++, ansStart++;
                }
                else
                {
                    ans[ansEnd] = s1[endA];
                    ansEnd--, endA--;
                }
            }
            else
            {
                if (s2[startB] > s1[startA])
                {
                    ans[ansStart] = s2[startB];
                    startB++, ansStart++;
                }
                else
                {
                    ans[ansEnd] = s2[endB];
                    ansEnd--, endB--;
                }
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}