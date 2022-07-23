// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class NumberContainers
{
public:
    map<int, int> mp;
    map<int, set<int>> st;
    NumberContainers()
    {
        mp.clear();
        st.clear();
    }

    void change(int index, int number)
    {
        mp[index] = number;
        st[number].insert(index);
    }

    int find(int number)
    {
        if (st.find(number) == st.end())
            return -1;
        int ans = -1;
        for (auto &it : st[number])
            if (mp[it] == number)
                return it;
        return ans;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */