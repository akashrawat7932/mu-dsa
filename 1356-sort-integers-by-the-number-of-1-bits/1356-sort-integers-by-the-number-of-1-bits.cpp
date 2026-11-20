class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            int bitsA = __builtin_popcount(static_cast<unsigned int>(a));
            int bitsB = __builtin_popcount(static_cast<unsigned int>(b));
            if (bitsA != bitsB) {
                return bitsA < bitsB;
            }
            return a < b;
        });
        return arr;
    }
};