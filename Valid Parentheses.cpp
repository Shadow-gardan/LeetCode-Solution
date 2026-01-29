class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[' || c == '<') {
                st.push(c); 
            } else {
                if (st.empty()) return false;

                char first = st.top();
                st.pop();

                if ((c == ')' && first != '(') ||
                    (c == '}' && first != '{') ||
                    (c == ']' && first != '[') || 
                    (c == '>' && first != '<')){
                    return false;
                }
            }
        }
        return st.empty();
    }
};