// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "";
    for (int i = 0; i < 50; i++)
    {
        if (i % 2)
            s1 += "00";
        else
            s1 += "11";
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string temp1 = s1.substr(1, m), temp2 = s1.substr(3, m);

        for (int i = 0; i < n / 2; i++)
        {
            if (i % 2)
            {
                for (auto &it : temp2)
                    cout << it << " ";
                cout << endl;
                for (auto &it : temp1)
                    cout << it << " ";
                cout << endl;
            }
            else
            {
                for (auto &it : temp1)
                    cout << it << " ";
                cout << endl;
                for (auto &it : temp2)
                    cout << it << " ";
                cout << endl;
            }
        }
    }
    return 0;
}