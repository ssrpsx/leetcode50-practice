#include <string>
#include <algorithm>
using namespace std;

class Solution {
    public:
        string addBinary(string a, string b) {
            int i = 0, j = 0;
            int check = 0;
            string result;

            while(i < a.length() || j < b.length() || check)
            {
                int sum = check;

                if(i < a.length())
                {
                    sum += a[i] - '0';
                    i++;
                }

                if(j < b.length())
                {
                    sum += b[j] - '0';
                    j++;
                }

                result += (sum % 2) + '0';
                check = sum / 2;
            }

            reverse(result.begin(), result.end());
            return result;
        }
};