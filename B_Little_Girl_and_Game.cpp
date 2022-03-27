// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    vector<int> hsh(26, 0);
    for (int i = 0; i < s.length(); i++)
        hsh[s[i] - 'a']++;

    int freq = 0;
    while (1)
    {
        freq++;
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (hsh[i] % 2)
                cnt++;
        }
        if (cnt == 1 || cnt == 0)
            break;
        else
        {
            bool flag = false;
            for (int i = 0; i < 26; i++)
            {
                if (hsh[i] % 2 == 0 && hsh[i] != 0)
                {
                    hsh[i]--;
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                for (int i = 0; i < 26; i++)
                {
                    if (hsh[i])
                    {
                        hsh[i]--;
                        break;
                    }
                }
            }
        }
    }

    if (freq % 2)
        cout << "First";
    else
        cout << "Second";

    return 0;
}