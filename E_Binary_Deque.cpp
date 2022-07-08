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
        int n, s;
        cin >> n >> s;

        int sum = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum < s)
            cout << -1 << endl;
        else
        {
            int i = 0, j = 0, maxWindow = 0, currsum = 0;
            while (j < n)
            {
                currsum += arr[j];
                if (currsum < s)
                    j++;
                else if (currsum == s)
                {
                    maxWindow = max(maxWindow, j - i + 1);
                    j++;
                }
                else
                {
                    while (currsum > s)
                    {
                        currsum -= arr[i];
                        i++;
                    }
                    j++;
                }
            }
            cout << n - maxWindow << endl;
        }
    }
    return 0;
}