#include <bits/stdc++.h>
using namespace std;

void updateBidx(string s, int &bidx1, int &bidx2, int &bidx3)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            bidx1 = i;
        if (s[i] == '2')
            bidx2 = i;
        if (s[i] == '3')
            bidx3 = i;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        map<char, int> m;
        int sidx1 = -1, bidx1 = -1, sidx2 = -1, bidx2 = -1, sidx3 = -1, bidx3 = -1;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
            if (s[i] == '1')
            {
                if (sidx1 == -1)
                    sidx1 = i;
                bidx1 = i;
            }
            if (s[i] == '2')
            {
                if (sidx2 == -1)
                    sidx2 = i;
                bidx2 = i;
            }
            if (s[i] == '3')
            {
                if (sidx3 == -1)
                    sidx3 = i;
                bidx3 = i;
            }
        }

        if (m['1'] == 0 || m['2'] == 0 || m['3'] == 0)
        {
            cout << 0 << endl;
            continue;
        }

        string s2;
        if (sidx3 > sidx1 && sidx3 > sidx2)
        {
            s2 = s.substr(sidx3 + 1);
            s = s.substr(0, sidx3 + 1);
            bidx3 = sidx3;
        }
        else if (sidx2 > sidx1 && sidx2 > sidx3)
        {
            s2 = s.substr(sidx2 + 1);
            s = s.substr(0, sidx2 + 1);
            bidx2 = sidx2;
        }
        else if (sidx1 > sidx2 && sidx1 > sidx3)
        {
            s2 = s.substr(sidx1 + 1);
            s = s.substr(0, sidx1 + 1);
            bidx1 = sidx1;
        }
        updateBidx(s, bidx1, bidx2, bidx3);

        if (bidx1 < bidx2 && bidx1 < bidx3)
            s = s.substr(bidx1);
        else if (bidx2 < bidx1 && bidx2 < bidx3)
            s = s.substr(bidx2);
        else if (bidx3 < bidx2 && bidx3 < bidx1)
            s = s.substr(bidx3);

        // ans = s.length();

        updateBidx(s2, bidx1, bidx2, bidx3);
        if (bidx1 < bidx2 && bidx1 < bidx3)
            s2 = s2.substr(bidx1);
        else if (bidx2 < bidx1 && bidx2 < bidx3)
            s2 = s2.substr(bidx2);
        else if (bidx3 < bidx2 && bidx3 < bidx1)
            s2 = s2.substr(bidx3);

        bool flag = true;
        m.clear();
        for (int i = 0; i < s2.length(); i++)
            m[s2[i]]++;

        if (m['1'] == 0 || m['2'] == 0 || m['3'] == 0)
            flag = false;

        if (s2.length() < s.length() && flag == true)
            cout << s2.length() << endl;
        else
            cout << s.length() << endl;
    }
    return 0;
}