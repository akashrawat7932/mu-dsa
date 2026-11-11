class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
        int n = score.size();
        std::vector<std::pair<int, int>> scoredIndex(n);
        
        for (int i = 0; i < n; ++i) {
            scoredIndex[i] = {score[i], i};
        }
        
        // Sort in descending order of scores
        std::sort(scoredIndex.rbegin(), scoredIndex.rend());
        
        std::vector<std::string> answer(n);
        
        for (int i = 0; i < n; ++i) {
            int originalIndex = scoredIndex[i].second;
            if (i == 0) {
                answer[originalIndex] = "Gold Medal";
            } else if (i == 1) {
                answer[originalIndex] = "Silver Medal";
            } else if (i == 2) {
                answer[originalIndex] = "Bronze Medal";
            } else {
                answer[originalIndex] = std::to_string(i + 1);
            }
        }
        
        return answer;
    }
};