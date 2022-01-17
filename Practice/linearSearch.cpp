#include <iostream>
using namespace std;
bool linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    cout << linearSearch(arr, 8, 2) << endl;
    cout << linearSearch(arr, 8, 5);
    return 0;
}