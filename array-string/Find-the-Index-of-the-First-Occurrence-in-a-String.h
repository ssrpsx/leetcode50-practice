#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int i, first, k;
        bool sure = false;

        for (i = 0, k = 0; i < haystack.length(); i++)
        {
            if (haystack[i] == needle[k])
            {
                first = i;

                for (int j = 0; j < needle.length(); j++)
                {
                    if(haystack[i + j] == needle[k])
                    {
                        k++;
                        sure = true;
                    }
                    else
                    {
                        k = 0;
                        sure = false;
                        break;
                    }
                }

            }
        }

        if (sure == true)
            return first;

        return -1;
    }
};