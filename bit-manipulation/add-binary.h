#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
    public:
        string addBinary(string a, string b) {
            int i = a.length() - 1, j = b.length() - 1;
            int check = 0;
            string result;

            // 1010, 1011, 01001
            while(i >= 0 || j >= 0 || check > 0)
            {
                int sum = check;

                if(i >= 0)
                {
                    sum += a[i] - '0';
                    i--;
                }

                if(j >= 0)
                {
                    sum += b[j] - '0';
                    j--;
                }

                result += (sum % 2) + '0';
                check = sum / 2;
            }

            reverse(result.begin(), result.end());
            return result;
        }
};