#include <string>
using namespace std;

class Solution {
    public:
        bool isPalindrome(string s) {
            int i, j, count = s.length();
            string output(count, ' ');

            for(i = 0, j = 0; i < count; i++)
            {
                if(s[i] > 64 && s[i] < 91)
                    output[j++] = s[i] + 32;
                else if((s[i] > 96 && s[i] < 123) || (s[i] > 47 && s[i] < 58))
                    output[j++] = s[i];
            }
            output[j] = '\0';
            if(j == 0) return true;
            output.resize(j);
            count = j;
            
            for(i = 0, j--; i <= count / 2; i++, j--)
            {
                if(output[i] != output[j]) return false;
            }
            return true;
        }
    };