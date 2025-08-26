#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int min_index;
        int final = -1;
        int answer = INT_MIN;

        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < min)
            {
                min = prices[i];
            }

            final = prices[i] - min;

            if(final > answer) answer = final;
        }

        return answer;
    }
};