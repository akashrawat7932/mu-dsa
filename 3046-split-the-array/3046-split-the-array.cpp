class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] == nums[i + 2]) {
                return false;
            }
        }
        return true;
    }
};