// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    ll a, b;
    cin >> a >> b;

    bool flag1 = false, flag2 = false;
    string dividend1 = "", dividend2 = "";
    vector<ll> indices;
    ll idx = 1e9;

    for (ll i = 0; i < s.length() - 1; i++)
    {
        dividend1 += s[i];
        ll dividend = stoi(dividend1);

        if (dividend >= a)
        {
            ll rem = dividend % a;
            if (rem == 0)
            {
                ll real_idx = i;
                dividend1 = "";
                idx = i;
                while (i < s.length())
                {
                    i++;
                    if (i < s.length() && s[i] == '0')
                        idx = i;
                    else
                        break;
                }
                if (i != real_idx)
                    i--;
                indices.push_back(idx);
                flag1 = true;
            }
            else
                dividend1 = to_string(rem);
        }
    }

    if (idx == 1e9)
        cout << "NO";

    else
    {
        idx = 0;
        for (ll ind = 0; ind < indices.size(); ind++)
        {
            if (flag2)
                break;
            dividend2 = "";
            for (ll i = indices[ind] + 1; i < s.length(); i++)
            {
                dividend2 += s[i];
                ll dividend = stoi(dividend2);

                if (dividend >= b)
                {
                    ll rem = dividend % b;
                    if (rem == 0)
                    {
                        dividend2 = "";
                        if (i == s.length() - 1)
                        {
                            flag2 = true;
                            idx = indices[ind];
                        }
                        ll real_idx = i;
                        while (i < s.length())
                        {
                            i++;
                            if (i < s.length() && s[i] == '0')
                                continue;
                            else
                                break;
                        }
                        if (i == s.length())
                        {
                            flag2 = true;
                            idx = indices[ind];
                        }
                        if (i != real_idx)
                            i--;
                    }
                    else
                        dividend2 = to_string(rem);
                }
            }
        }

        if (flag1 && flag2)
        {
            cout << "YES\n";
            cout << s.substr(0, idx + 1) << endl;
            cout << s.substr(idx + 1) << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}