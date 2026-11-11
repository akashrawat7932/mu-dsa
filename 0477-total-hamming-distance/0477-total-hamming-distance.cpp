class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int totalDistance = 0;
        int n = nums.size();
        
       for (int i = 0; i < 32; ++i) {
            int zeroCount = 0;
            int oneCount = 0;
            
            for (int num : nums) {
                if ((num >> i) & 1) {
                    oneCount++;
                } else {
                    zeroCount++;
                }
            }
            
            totalDistance += zeroCount * oneCount;
        }
        
        return totalDistance;
    }
};