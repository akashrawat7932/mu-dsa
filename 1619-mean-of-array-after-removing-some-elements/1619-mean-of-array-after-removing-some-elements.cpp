class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = static_cast<int>(arr.size());
        int trim = n / 20;

        long long sum = 0;
        for (int i = trim; i < n - trim; ++i) {
            sum += arr[i];
        }

        int count = n - 2 * trim;
        return static_cast<double>(sum) / count;
    }
};