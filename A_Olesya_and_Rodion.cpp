#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, t;
    cin >> n >> t;
    string ans = "1";
    
    if (n == 1 && t == 10)
        ans = "-1";

    else if (t == 10)
    {
        for (int i = 0; i < n - 1; i++)
            ans += "0";
    }
    else
    {
        ans = "";
        string td = to_string(t);
        for (int i = 0; i < n; i++)
            ans += td;
    }
    cout << ans;
    return 0;
}