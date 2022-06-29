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

        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> arr(n);
        bool flag1 = false;

        if (b[n - 1] % 2)
        {
            arr[n - 1] = 2;
            arr[0] = 3;
            for (int i = n - 2; i > 0; i--)
            {
                if (b[i] % 2)
                {
                    if (arr[i + 1] == 2)
                        arr[i] = 3;
                    else if (arr[i + 1] == 3)
                        arr[i] = 2;
                }
                else
                {
                    if (arr[i + 1] == 2)
                        arr[i] = 2;
                    else if (arr[i + 1] == 3)
                        arr[i] = 3;
                }
            }
            if ((arr[0] + arr[1]) % 2 && b[0] == 1)
                flag1 = true;

            else if (((arr[0] + arr[1]) % 2) == 0 && b[0] == 0)
                flag1 = true;
            else
            {
                arr.clear();
                arr[n - 1] = 3;
                arr[0] = 2;
                for (int i = n - 2; i > 0; i--)
                {
                    if (b[i] % 2)
                    {
                        if (arr[i + 1] == 2)
                            arr[i] = 3;
                        else if (arr[i + 1] == 3)
                            arr[i] = 2;
                    }
                    else
                    {
                        if (arr[i + 1] == 2)
                            arr[i] = 2;
                        else if (arr[i + 1] == 3)
                            arr[i] = 3;
                    }
                }
                if ((arr[0] + arr[1]) % 2 && b[0] == 1)
                    flag1 = true;

                else if (((arr[0] + arr[1]) % 2) == 0 && b[0] == 0)
                    flag1 = true;
            }
        }

        else
        {
            arr[n - 1] = 2;
            arr[0] = 2;
            for (int i = n - 2; i > 0; i--)
            {
                if (b[i] % 2)
                {
                    if (arr[i + 1] == 2)
                        arr[i] = 3;
                    else if (arr[i + 1] == 3)
                        arr[i] = 2;
                }
                else
                {
                    if (arr[i + 1] == 2)
                        arr[i] = 2;
                    else if (arr[i + 1] == 3)
                        arr[i] = 3;
                }
            }
            if ((arr[0] + arr[1]) % 2 && b[0] == 1)
                flag1 = true;

            else if (((arr[0] + arr[1]) % 2) == 0 && b[0] == 0)
                flag1 = true;
            else
            {
                arr.clear();
                arr[n - 1] = 3;
                arr[0] = 3;
                for (int i = n - 2; i > 0; i--)
                {
                    if (b[i] % 2)
                    {
                        if (arr[i + 1] == 2)
                            arr[i] = 3;
                        else if (arr[i + 1] == 3)
                            arr[i] = 2;
                    }
                    else
                    {
                        if (arr[i + 1] == 2)
                            arr[i] = 2;
                        else if (arr[i + 1] == 3)
                            arr[i] = 3;
                    }
                }
                if ((arr[0] + arr[1]) % 2 && b[0] == 1)
                    flag1 = true;

                else if (((arr[0] + arr[1]) % 2) == 0 && b[0] == 0)
                    flag1 = true;
            }
        }
        if (flag1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}