#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = 0, k;
        string s;

        if (strs.empty())
            return "";
        if (strs.size() == 1)
            return strs[0];

        while (1)
        {
            for (int i = 0; i < strs.size(); i++)
            {
                if (n >= strs[i].size())
                    return s;
                if (i > 0 && strs[i][n] != strs[i - 1][n])
                    return s;
            }

            s += strs[0][n];
            n++;
        }

        return s;
    }
};