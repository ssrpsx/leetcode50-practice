#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool check = false;

        if(s.length() == 1) return 1;
        for(int i = s.length() - 1; i >= 0; i--)
        {
            if(s[i] == ' ' && check == true) break;
            if(s[i] != ' ')
            {
                count++;
                check = true;
            }
        }

        return count;
    }
};