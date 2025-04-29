#include "../main_header.h"

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int count = 0, i;

            for(i = 1; i < nums.size(); i++)
            {   
                if(nums[i] != nums[count])
                {
                    nums[++count] = nums[i];
                }
            }

            return count + 1;
        }
    };