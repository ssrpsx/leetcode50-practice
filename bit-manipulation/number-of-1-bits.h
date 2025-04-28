#include "../main_header.h"

class Solution {
    public:
        int hammingWeight(int n) {
            if(n == 0) return 0;

            string s;
            int count = 0, i;
            while (n > 0)
            {
                s += (n % 2) + '0';
                n /= 2;
            }

            reverse(s.begin(), s.end());
            for(i = 0; i < s.length(); i++)
            {
                if(s[i] == '1') count++;
            }

            return count;
        }
    };