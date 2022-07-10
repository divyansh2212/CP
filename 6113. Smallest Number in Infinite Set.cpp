// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SmallestInfiniteSet
{
private:
    bool hsh[1001];

public:
    SmallestInfiniteSet()
    {
        for (int i = 1; i < 1001; i++)
            hsh[i] = 1;
    }

    int popSmallest()
    {
        for (int i = 1; i < 1001; i++)
        {
            if (hsh[i])
            {
                hsh[i] = 0;
                return i;
            }
        }
        return 1;
    }

    void addBack(int num)
    {
        hsh[num] = 1;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */