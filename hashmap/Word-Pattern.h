#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, string> set1;
        unordered_map<string, char> set2;
        string temp = "";
        int n = 0;

        for (int i = 0; i <= s.length(); i++)
        {
            if (s[i] == ' ' || i == s.length())
            {
                if (n >= pattern.length())
                    return false;

                if (set1.find(pattern[n]) != set1.end() || set2.find(temp) != set2.end())
                {
                    if ((set1[pattern[n]] != temp) || set2[temp] != pattern[n])
                    {
                        return false;
                    }
                }
                else
                {
                    set1[pattern[n]] = temp;
                    set2[temp] = pattern[n];
                }

                n++;
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }

        if(n != pattern.length()) return false;

        return true;
    }
};