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

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            
        }

        cout << ans << endl;
    }
    return 0;
}