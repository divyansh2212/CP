#include <iostream>
using namespace std;
int oneUniqueEle(int arr[], int n)
{
    int xxor = 0;
    for (int i = 0; i < n; i++)
    {
        xxor = xxor ^ arr[i];
    }
    return xxor;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 2, 1, 4};
    cout << oneUniqueEle(arr, 7) << endl;
    return 0;
}