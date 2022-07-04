// Jai Shree Babosa!

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        unordered_map<char, char> mp;
        char c = 'a';
        for (int i = 0; i < key.length(); i++)
        {
            if (key[i] == ' ')
                continue;
            if (mp.find(key[i]) == mp.end())
            {
                mp[key[i]] = c;
                c++;
            }
        }

        for (int i = 0; i < message.length(); i++)
        {
            if (message[i] == ' ')
                continue;
            message[i] = mp[message[i]];
        }

        return message;
    }
};