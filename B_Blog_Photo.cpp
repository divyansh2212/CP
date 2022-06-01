// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll h, w;
    cin >> h >> w;

    float quot = (h * 1.0) / w;
    ll area = INT_MIN;

    if (quot >= 0.8 && quot <= 1.25 && (((h & (h - 1)) == 0) || ((w & (w - 1)) == 0)))
    {
        cout << h << " " << w << endl;
        return 0;
    }

    else if (quot > 1.25)
    {
        int bits = log2(h);
        int new_h = (1 << bits);

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
        int bits = log2(w);
        int new_w = (1 << bits);

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
        int bitsh = log2(h);
        int new_h = (1 << bitsh);
        if (new_h == h)
            new_h = (1 << (bitsh - 1));

        int bitsw = log2(w);
        int new_w = (1 << bitsw);
        if (new_w == w)
            new_w = (1 << (bitsw - 1));

        quot = (h * 1.0) / new_w;
        if (quot >= 0.8 && quot <= 1.25)
        {
            if ((h * new_w) > area)
            {
                area = h * new_w;
                w = new_w;
            }
        }

        quot = (new_h * 1.0) / w;
        if (quot >= 0.8 && quot <= 1.25)
        {
            if ((new_h * w) > area)
            {
                area = new_h * w;
                h = new_h;
            }
        }

        quot = (new_h * 1.0) / new_w;
        if (quot >= 0.8 && quot <= 1.25)
        {
            if ((new_h * new_w) > area)
            {
                area = new_h * new_w;
                h = new_h, w = new_w;
            }
        }
    }
    
    cout << h << " " << w << endl;

    return 0;
}