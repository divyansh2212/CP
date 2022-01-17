#include <iostream>
using namespace std;
int getbit(int n, int pos)
{
    return (n & 1 << pos) != 0;
}
void unique2Ele(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int pos = -1, rightsetBit = 0;
    while (rightsetBit == 0)
    {
        rightsetBit = tempxor & 1;
        pos++;
        tempxor = tempxor >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (getbit(arr[i], pos) == 1)
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << " " << (xorsum ^ newxor);
}
int main()
{
    int arr[] = {1, 5, 6, 6, 5, 1, 2, 8};
    unique2Ele(arr, 8);
    return 0;
}