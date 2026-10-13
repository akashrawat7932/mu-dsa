class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> a;
        for (int x : nums) a.push_back(1LL * x * x);
        
        sort(a.begin(), a.end());
        
        long long ans = 0;
        int n = a.size();
        for (int i = 0; i < n; ++i) {
            ans += (i < n / 2 ? -a[i] : a[i]);
        }
        return ans;
    }
};