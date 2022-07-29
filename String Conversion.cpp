// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return 1;
    }

    return 0;
}

int stringConversion(string s, vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i && arr[i] == arr[i - 1])
            continue;
        string binary = bitset<16>(arr[i]).to_string();
        reverse(binary.begin(), binary.end());
        while (binary.size() && binary.back() == '0')
            binary.pop_back();
        reverse(binary.begin(), binary.end());

        if (isSubstring(binary, s) == 0)
            return 0;
    }
    return 1;
}
