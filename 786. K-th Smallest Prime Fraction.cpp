// <--------------------Jai Shree Babosa-------------------->

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
const int mod = 1e9 + 7;

class Solution
{
    pair<int, pair<int, int>> check(double mid, vector<int> &arr)
    {
        int n = arr.size();
        int i = 0, j = 0, ans = 0, numerator = arr[0], denominator = arr[n - 1];

        while (j < n)
        {
            while (arr[i] < arr[j] * mid)
                i++;
            ans += i;
            if (i > 0 && arr[i - 1] * denominator > arr[j] * numerator)
                numerator = arr[i - 1], denominator = arr[j];
            j++;
        }
        return {ans, {numerator, denominator}};
    }

public:
    vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
    {
        int n = arr.size();

        double lo = (arr[0] * 1.0) / arr[n - 1], hi = 1;
        for (int i = 0; i < 100; i++)
        {
            double mid = (lo + hi) / 2.0;
            auto checked = check(mid, arr);

            if (checked.first == k)
                return {checked.second.first, checked.second.second};
            else if (check(mid, arr).first < k)
                lo = mid;
            else
                hi = mid;
        }
        return {-1, -1};
    }
};