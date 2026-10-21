#include <string>
#include <algorithm>

class Solution {
public:
    int minimumFlips(int n) {
        
        string s = "";
        while (n > 0) {
            s += (n % 2 == 0 ? '0' : '1');
            n /= 2;
        }
        reverse(s.begin(), s.end());
        
       string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        
        
        int flips = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != rev_s[i]) {
                flips++;
            }
        }
        
        return flips;
    }
};