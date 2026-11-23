class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low < high) {
            int mid = (low + high) / 2;

            int sum = 0, count = 1;

            for (int x : nums) {
                if (sum + x > mid) {
                    count++;
                    sum = x;
                } else {
                    sum += x;
                }
            }

            if (count <= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};