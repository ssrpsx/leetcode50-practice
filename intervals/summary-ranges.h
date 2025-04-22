#include <vector>
#include <string>
using namespace std;

class Solution {
    public:
        vector<string> summaryRanges(vector<int>& nums) {
            vector<string> result;
            int i = 0, j = 1, k = 0;
            
            if(nums.size() == 0) return result;
            while(i < nums.size())
            {
                int first = nums[i],
                    last = nums[i];
                while(i + 1 < nums.size() && nums[i] == nums[i + 1] - 1)
                {   
                    i++;
                    last = nums[i];
                }
                if(first != last)
                {
                    result.push_back(to_string(first) + "->" + to_string(last));
                }
                else
                {
                    result.push_back(to_string(first));
                }
                j = 1;
                i++;
            }
            return result;
        }
    };