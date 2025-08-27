#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int score = 0;
        int i;

        map<char, int> dic;
        dic['I'] = 1;
        dic['V'] = 5;
        dic['X'] = 10;
        dic['L'] = 50;
        dic['C'] = 100;
        dic['D'] = 500;
        dic['M'] = 1000;
        
        for (i = 0; i < s.length(); i++)
        {
            if (i+1 < s.length() && dic[s[i]] < dic[s[i + 1]])
            {
                score += dic[s[i + 1]] - dic[s[i]];
                i++;
            }
            else
            {
                score += dic[s[i]];
            }
        }

        return score;
    }
};