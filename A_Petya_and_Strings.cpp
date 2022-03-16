#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int ans = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] = s1[i] - 'A' + 'a';
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] = s2[i] - 'A' + 'a';
        if (s1[i] > s2[i])
        {
            ans = 1;
            break;
        }
        if (s1[i] < s2[i])
        {
            ans = -1;
            break;
        }
    }
    cout << ans;
    return 0;
}