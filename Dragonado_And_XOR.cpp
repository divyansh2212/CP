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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<vector<int>> arr;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                int xr = (arr[i] ^ arr[j]);
                int bits = __builtin_popcount(xr);
                vector<int> temp;
                if (i < j)
                {
                    temp.push_back(i);
                    temp.push_back(j);
                }
                else
                {
                    temp.push_back(j);
                    temp.push_back(i);
                }
                setBits[bits].push_back(temp);
            }
        }

        for (int i = 0; i < 33; i++)
        {
            if(arr[i].size() > 1)
            {
                
            }

        }
        
    }
    return 0;
}