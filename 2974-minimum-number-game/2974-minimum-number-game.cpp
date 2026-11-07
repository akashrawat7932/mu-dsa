class Solution {
public:
    std::vector<int> numberGame(std::vector<int>& nums) {
        // Step 1: Sort the array in ascending order
        std::sort(nums.begin(), nums.end());
        
        // Step 2: Swap adjacent elements (index i with i + 1)
        for (size_t i = 0; i < nums.size(); i += 2) {
            std::swap(nums[i], nums[i + 1]);
        }
        
        return nums;
    }
};