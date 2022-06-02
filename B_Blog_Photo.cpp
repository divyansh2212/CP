// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll h, w;
    cin >> h >> w;

    float quot = (h * 1.0) / w;

    if (quot >= 0.8 && quot <= 1.25 && (((h & (h - 1)) == 0) || ((w & (w - 1)) == 0)))
    {
        cout << h << " " << w << endl;
        return 0;
    }

    else if (quot > 1.25)
    {
        ll bits = log2(h);
        ll new_h = (1 << bits);

        quot = (new_h * 1.0) / w;
        while (quot > 1.25)
        {
            bits--;
            new_h = (1 << bits);
            quot = (new_h * 1.0) / w;
        }

        cout << new_h << " " << w << endl;
        return 0;
    }

    else if (quot < 0.8)
    {
        ll bits = log2(w);
        ll new_w = (1 << bits);

        quot = (h * 1.0) / new_w;
        while (quot < 0.8)
        {
            bits--;
            new_w = (1 << bits);
            quot = (h * 1.0) / new_w;
        }
        cout << h << " " << new_w << endl;
        return 0;
    }

    else
    {
        ll bitsh = log2(h);
        ll new_h = (1 << bitsh);

        for (ll new_w = ceil(new_h / 1.25); new_w <= w, new_w <= floor(new_h / 0.8); new_w++)
        {
            if ((new_h * 1.0) / new_w >= 0.8 && (new_h * 1.0) / new_w <= 1.25)
                w = new_w;
        }

        cout << new_h << " " << w << endl;
    }

    return 0;
}