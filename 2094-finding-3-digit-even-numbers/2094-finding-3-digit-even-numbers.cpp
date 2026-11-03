class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> count(10, 0);
        for (int d : digits) {
            count[d]++;
        }
        
        vector<int> result;
        
        // Iterate over all possible 3-digit even numbers
        for (int num = 100; num <= 998; num += 2) {
            int h = num / 100;
            int t = (num / 10) % 10;
            int u = num % 10;
            
            
            vector<int> tempCount(10, 0);
            tempCount[h]++;
            tempCount[t]++;
            tempCount[u]++;
            
            
            if (tempCount[h] <= count[h] && tempCount[t] <= count[t] && tempCount[u] <= count[u]) {
                result.push_back(num);
            }
        }
        
        return result;
    }
};