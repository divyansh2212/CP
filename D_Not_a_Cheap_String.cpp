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
        string w;
        cin >> w;

        int p;
        cin >> p;

        int price = 0;
        for (int i = 0; i < w.length(); i++)
            price += (w[i] - 'a' + 1);

        if (price <= p)
        {
            cout << w << endl;
            continue;
        }

        vector<int> hsh[26];

        for (int i = 0; i < w.length(); i++)
            hsh[w[i] - 'a'].push_back(i);

        vector<bool> to_delete(w.length(), false);
        for (int i = 25; i >= 0; i--)
        {
            if (hsh[i].size())
            {
                while (price > p && hsh[i].size())
                {
                    price -= (i + 1);
                    to_delete[hsh[i].back()] = true;
                    hsh[i].pop_back();
                }
            }
            if (price <= p)
                break;
        }

        for (int i = 0; i < w.length(); i++)
            if (to_delete[i] == false)
                cout << w[i];
        cout << endl;
    }
    return 0;
}