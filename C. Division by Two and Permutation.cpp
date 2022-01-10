// DONE
#include <bits/stdc++.h>
using namespace std;
const int N = 51;
int n;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        bool positions[N] = {false};
        bool numbers[n + 1] = {false};
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 1 && arr[i] <= n && numbers[arr[i]] == false)
            {
                positions[i] = true;
                numbers[arr[i]] = true;
            }
        }
        int flag = true;
        while (flag)
        {
            bool scndflag = true;
            for (int i = 1; i <= n; i++)
            {
                if (numbers[i] == false)
                    scndflag = false;
            }
            if (scndflag)
                break;
            for (int i = 0; i < n; i++)
            {
                if (positions[i] == false)
                {
                    arr[i] = arr[i] / 2;
                    if (arr[i] == 0)
                    {
                        flag = false;
                        break;
                    }
                    if (arr[i] >= 1 && arr[i] <= n && numbers[arr[i]] == false)
                    {
                        positions[i] = true;
                        numbers[arr[i]] = true;
                    }
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}