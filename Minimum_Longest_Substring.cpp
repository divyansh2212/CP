// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ones1 = 0, zeroes1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeroes1++;
            else
                ones1++;
        }

        int ones2 = ones1, zeroes2 = zeroes1;

        string t = "", r = "";

        for (int i = 0; i < n; i++)
        {
            if (ones1 > zeroes1)
            {
                t.push_back('1');
                ones1--;
                if (zeroes2)
                {
                    r.push_back('0');
                    zeroes2--;
                }
                else
                {
                    r.push_back('1');
                    ones2--;
                }
            }
            else if (ones1 == zeroes1)
            {
                if (zeroes2 > ones2)
                {
                    r.push_back('0'), zeroes2--, t.push_back('1'), ones1--;
                }
                else
                {
                    r.push_back('1'), ones2--, t.push_back('0'), zeroes1--;
                }
            }
            else
            {
                t.push_back('0');
                zeroes1--;
                if (ones2)
                {
                    r.push_back('1');
                    ones2--;
                }
                else
                {
                    r.push_back('0');
                    zeroes2--;
                }
            }
        }
        cout << t << endl;
        cout << r << endl;
    }
    return 0;
}