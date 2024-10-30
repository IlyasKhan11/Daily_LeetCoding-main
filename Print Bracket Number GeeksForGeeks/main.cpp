class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        vector<int> ans;
        int count=0;
        stack<int> st;
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
                count++;
                st.push(count);
                ans.push_back(count);
            }
            if(str[i]==')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};
