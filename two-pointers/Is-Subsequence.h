#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k = 0;
        for(char c : t)
        {
            if(s[k] == c)
            {
                k++;
            }
        }

        if(k == s.length()) return true;

        return false;
    }
};