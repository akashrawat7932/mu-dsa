class NumArray {
private:
    vector<long long> prefix;

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix.assign(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return static_cast<int>(prefix[right + 1] - prefix[left]);
    }
};