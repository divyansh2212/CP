#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    for (int i = y + 1; i < 9999; i++)
    {
        int hsh[10] = {0};
        int i_copy = i;
        while (i_copy)
        {
            int rem = i_copy % 10;
            hsh[rem]++;
            i_copy = i_copy / 10;
        }
        bool flag = true;
        for (int j = 0; j < 10; j++)
        {
            if (hsh[j] > 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << i;
            break;
        }
    }

    return 0;
}