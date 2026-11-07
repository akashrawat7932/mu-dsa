class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        set<long long> s;
        
        for (int i = 0; i < nums.size(); ++i) {
            // Find the first element >= nums[i] - valueDiff
            auto it = s.lower_bound((long long)nums[i] - valueDiff);
            
            // Check if it is <= nums[i] + valueDiff
            if (it != s.end() && *it <= (long long)nums[i] + valueDiff) {
                return true;
            }
            
            s.insert(nums[i]);
            
            // Keep only 'indexDiff' elements behind
            if (s.size() > indexDiff) {
                s.erase(nums[i - indexDiff]);
            }
        }
        
        return false;
    }
};