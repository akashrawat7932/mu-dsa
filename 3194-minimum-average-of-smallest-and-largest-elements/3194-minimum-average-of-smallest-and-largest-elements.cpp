class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        double minAvg = __DBL_MAX__;
        
        for (int i = 0; i < n / 2; ++i) {
            double currentAvg = (nums[i] + nums[n - 1 - i]) / 2.0;
            minAvg = std::min(minAvg, currentAvg);
        }
        
        return minAvg;
    }
};