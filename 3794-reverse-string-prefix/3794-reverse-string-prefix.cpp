class Solution {
public:
    string reversePrefix(string s, int k) {
        std::reverse(s.begin(), s.begin() + k);
        
        return s;
    }
};