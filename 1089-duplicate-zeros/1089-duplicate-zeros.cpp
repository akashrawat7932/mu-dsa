class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) {
        int n = arr.size();
        std::vector<int> result;
        
        for (int num : arr) {
            if (result.size() >= n) break;
            
            result.push_back(num);
            if (num == 0 && result.size() < n) {
                result.push_back(0); // Duplicate the zero
            }
        }
        
        // Copy modified contents back into original array
        for (int i = 0; i < n; i++) {
            arr[i] = result[i];
        }
    }
};