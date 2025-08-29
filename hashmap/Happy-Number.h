#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        int sum = 0;
        string str;

        while (1)
        {
            str = to_string(n);

            for(int i = 0; i < str.length(); i++)
            {
                sum += ((str[i] - '0') * (str[i] - '0'));
            }
            if(s.find(sum) != s.end()) return false;
            if(sum == 1) return true;
            
            s.insert(sum);
            n = sum;
            sum = 0;
        }

        return true;
        
    }
};