#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int p = 1;

        for(int i = digits.size() - 1; i >= 0; i--)
        {
            int sum = digits[i] + p;
            digits[i] = sum % 10;
            p = sum / 10;
        }

        if(p > 0)
        {
            digits.insert(digits.begin(), p);
        }


        return digits;
    }
};