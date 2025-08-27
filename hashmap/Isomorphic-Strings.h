#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> set1;
        unordered_map<char, char> set2;

        for(int i = 0; i < s.length(); i++)
        {
            if((set1.find(s[i]) != set1.end()) || (set2.find(t[i]) != set2.end()))
            {
                if((set1[s[i]] != t[i]) || set2[t[i]] != s[i])
                    return false;
            }

            set1[s[i]] = t[i];
            set2[t[i]] = s[i];
        }

        return true;
    }
};