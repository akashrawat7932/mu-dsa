class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            // Agar opening bracket hai toh stack mein daal do
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // Agar closing bracket hai aur stack khali hai, toh galat hai
                if (st.empty()) return false;
                
                char top = st.top();
                st.pop();
                
                // Check karo ki closing bracket apne matching open bracket se milta hai ya nahi
                if (c == ')' && top != '(') return false;
                if (c == '}' && top != '{') return false;
                if (c == ']' && top != '[') return false;
            }
        }
        
        // Agar stack khali bachha hai matlab saare brackets match ho gaye
        return st.empty();
    }
};