class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIdx = 0;
        
        // Find the index of the largest element
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[maxIdx]) {
                maxIdx = i;
            }
        }
        
        // Check if the largest element is at least twice as much as every other number
        for (int i = 0; i < nums.size(); ++i) {
            if (i != maxIdx && nums[maxIdx] < 2 * nums[i]) {
                return -1;
            }
        }
        
        return maxIdx;
    }
};