#include <iostream>
using namespace std;
bool binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    cout << binarySearch(arr, 8, 1) << endl;
    cout << binarySearch(arr, 8, 5);
    return 0;
}