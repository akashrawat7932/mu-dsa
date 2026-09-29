#include <vector>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        
    
        for (int start = 0; start < n; start++) {
            int currentSum = 0;
          
            for (int end = start; end < n; end++) {
                currentSum += nums[end];
                
                if (currentSum == k) {
                    count++;
                }
            }
        }
        
        return count;
    }
};