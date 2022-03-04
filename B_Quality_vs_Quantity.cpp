// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<ll> arr(n);
//         ll sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             sum += arr[i];
//         }

//         sort(arr.begin(), arr.end());

//         vector<ll> prefix(n);
//         prefix[0] = arr[0];
//         for (int i = 1; i < n; i++)
//             prefix[i] = prefix[i - 1] + arr[i];

//         bool flag = false;

//         int j = 0;
//         while (j < n)
//         {
//             for (int i = j; i < n; i++)
//             {
//                 ll s1 = prefix[i];
//                 if (j > 0)
//                     s1 -= prefix[j - 1];
//                 ll count1 = i + 1;
//                 ll s2 = sum - s1;
//                 ll count2 = n - i - 1;

//                 if (s1 < s2 && count1 > count2)
//                 {
//                     flag = true;
//                     break;
//                 }
//             }
//             j++;
//             if (flag)
//                 break;
//         }

//         if (flag)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }

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

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        ll redSum = arr[n - 1], blueSum = arr[0];
        bool flag = false;

        int i = 1, j = n - 2;

        while (i < j)
        {
            blueSum += arr[i];
            if (blueSum < redSum)
            {
                flag = true;
                break;
            }
            redSum += arr[j];

            j--, i++;
        }
        if (flag)
            cout << "YES\n";
        else
        {
            if (i == j)
            {
                blueSum += arr[i];
                if (blueSum < redSum)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}