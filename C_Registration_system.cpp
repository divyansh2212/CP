#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    map<string, int> m;
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (s.find(str) == s.end())
        {
            cout << "OK\n";
            s.insert(str);
            m[str]++;
        }
        else
        {
            m[str]++;
            str.append(to_string(m[str] - 1));
            cout << str << endl;
        }
    }

    return 0;
}