class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 0);
        
        for (int i = 0; i < n; ++i) {
            int count = 0;
            for (int j = i + 1; j < n; ++j) {
                // Check if nums[i] and nums[j] have different parities
                if ((nums[i] % 2) != (nums[j] % 2)) {
                    count++;
                }
            }
            answer[i] = count;
        }
        
        return answer;
    }
};