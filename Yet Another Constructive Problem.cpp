#include <bits/stdc++.h>
using namespace std;

bool isSetBit(int n, int i)
{
    return (n & (1 << i)) != 0;
}

int setBit(int n, int i)
{
    return (n | (1 << i));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int A = x, B, C;
        int cnt = 0;
        for (int i = 0; i < 32; i++)
        {
            if (isSetBit(x, i) == 0 && cnt == 0)
            {
                B = setBit(x, i);
                cnt++;
            }
            else if (isSetBit(x, i) == 0 && cnt == 1)
            {
                C = setBit(x, i);
                break;
            }
        }
        cout << A << " " << B << " " << C << endl;
    }

    return 0;
}