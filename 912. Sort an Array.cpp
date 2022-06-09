// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    void merge(vector<int> &arr, int s, int e)
    {
        int mid = s + ((e-s) / 2);

        int len1 = mid - s + 1, len2 = e - mid;

        vector<int> first(len1, 0); vector<int> second(len2, 0);

        int mainArrayIndex = s;
        for (int i = 0; i < len1; i++)
            first[i] = arr[mainArrayIndex++];

        mainArrayIndex = mid + 1;
        for (int i = 0; i < len2; i++)
            second[i] = arr[mainArrayIndex++];

        // merge two sorted arrays
        int index1 = 0, index2 = 0;
        mainArrayIndex = s;

        while (index1 < len1 && index2 < len2)
        {
            if (first[index1] < second[index2])
                arr[mainArrayIndex++] = first[index1++];
            else
                arr[mainArrayIndex++] = second[index2++];
        }

        while (index1 < len1)
            arr[mainArrayIndex++] = first[index1++];

        while (index2 < len2)
            arr[mainArrayIndex++] = second[index2++];
    }

    void mergeSort(vector<int> &nums, int s, int e)
    {
        if (s < e)
        {
            int mid = s + ((e-s) / 2);
            mergeSort(nums, s, mid);
            mergeSort(nums, mid + 1, e);

            // merging the both arrays
            merge(nums, s, e);
        }
    }

    vector<int> sortArray(vector<int> &nums)
    {
        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};