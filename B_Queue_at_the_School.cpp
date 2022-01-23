#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    // string ans;
    int time = 0;
    while (1)
    {
        if (time == t)
            break;
        int i = 0;
        while (i < n - 1)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i = i + 2;
            }
            else
                i++;
        }
        time++;
    }

    cout << s;
    return 0;
}