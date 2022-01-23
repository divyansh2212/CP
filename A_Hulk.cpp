#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans = "";
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
            ans += "I hate that ";
        else
            ans += "I love that ";
    }

    for (int i = 0; i < 5; i++)
        ans.pop_back();

    ans.push_back('i');
    ans.push_back('t');
    cout << ans;
    return 0;
}