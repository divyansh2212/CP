#include <iostream>
using namespace std;
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return n & mask;
}
int setBit(int n, int pos)
{
    int mask = 1 << pos;
    return (n | mask);
}
int getbit(int n, int pos)
{
    int mask = (1 << pos);
    return (n & mask) != 0;
}
int main()
{
    cout << getbit(4, 2) << endl;
    cout << setBit(4, 1) << endl;
    cout << clearBit(6, 1) << endl;
    return 0;
}