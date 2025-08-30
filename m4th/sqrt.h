#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        double i = 0, result = 0;

        if(x == 0 || x == 1) return x;
        while (result < x)
        {
            i++;
            result = i * i;
        }

        if(x == result) return i;
        i--;

        while (result < x)
        {
            i += 0.5;
            result = i * i;
        }

        return (int)i;
    }
};