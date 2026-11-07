class Solution {
public:
    string triangleType(vector<int>& nums) {
        // Check triangle inequality theorem
        if (nums[0] + nums[1] <= nums[2] || 
            nums[0] + nums[2] <= nums[1] || 
            nums[1] + nums[2] <= nums[0]) {
            return "none";
        }
        
        // Equilateral: all sides equal
        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";
        }
        
        // Isosceles: exactly two sides equal
        if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) {
            return "isosceles";
        }
        
        // Scalene: all sides different
        return "scalene";
    }
};