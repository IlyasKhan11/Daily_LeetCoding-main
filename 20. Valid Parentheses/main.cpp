class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if (st.empty()) return false;
                if (s[i] == ')' && st.top() == '(') st.pop();
                else if (s[i] == ']' && st.top() == '[') st.pop();
                else if (s[i] == '}' && st.top() == '{') st.pop();
                else return false; // Mismatch case
            }
        }
        return st.empty(); // True if stack is empty at the end
    }
};
