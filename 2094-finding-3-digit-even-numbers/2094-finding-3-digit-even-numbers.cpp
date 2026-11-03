class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int count[10] = {0};
        for (int d : digits) count[d]++;
        
        vector<int> result;
        for (int num = 100; num <= 998; num += 2) {
            int tempCount[10] = {0};
            tempCount[num / 100]++;
            tempCount[(num / 10) % 10]++;
            tempCount[num % 10]++;
            
            if (tempCount[0] <= count[0] && tempCount[1] <= count[1] &&
                tempCount[2] <= count[2] && tempCount[3] <= count[3] &&
                tempCount[4] <= count[4] && tempCount[5] <= count[5] &&
                tempCount[6] <= count[6] && tempCount[7] <= count[7] &&
                tempCount[8] <= count[8] && tempCount[9] <= count[9]) {
                result.push_back(num);
            }
        }
        return result;
    }
};