#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int zero, one;
    cin >> zero >> one;

    string s = "";
    if (zero - one == 1)
        s = "0", zero--;
    bool flag = false;
    while (1)
    {
        if (one == 0 && zero == 0)
            break;
        else if (one == 0)
        {
            if (zero > 1)
                flag = true;
            else if (s[s.length() - 1] == '0')
                flag = true;
            s.push_back('0');
            break;
        }
        else if (zero == 0)
        {
            if (one == 2)
                s.push_back('1'), s.push_back('1');
            else if (one == 1)
                s.push_back('1');
            else
                flag = true;
            break;
        }
        else if (one > zero)
        {
            s.push_back('1');
            s.push_back('1');
            s.push_back('0');
            one -= 2, zero--;
        }
        else if (zero >= one)
        {
            s.push_back('1');
            s.push_back('0');
            one--, zero--;
        }
    }
    if (flag)
        cout << -1;
    else
        cout << s;
    return 0;
}