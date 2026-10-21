#include <string>
#include <algorithm>
#include <sstream>

class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
        string word;
        string result = "";
        
        while (ss >> word) {
            if (result.length() > 0) {
                result = word + " " + result;
            } else {
                result = word;
            }
        }
        
        return result;
    }
};