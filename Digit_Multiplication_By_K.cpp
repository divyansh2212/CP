#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        string s;
        cin >> s;
        while (m--)
        {
            string new_s = "";
            for (int i = 0; i < s.length(); i++)
            {
                long long num = s[i] - '0';
                num *= k;
                new_s.append(to_string(num));
            }
            s = new_s;
        }
        cout << s.length() % M << endl;
    }

    return 0;
}