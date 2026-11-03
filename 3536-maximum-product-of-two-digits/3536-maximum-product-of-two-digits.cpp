#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProduct(int n) {
        std::vector<int> digits;
        while (n > 0) {
            digits.push_back(n % 10);
            n /= 10;
        }
        
        std::sort(digits.begin(), digits.end());
        
        int m = digits.size();
        return digits[m - 1] * digits[m - 2];
    }
};