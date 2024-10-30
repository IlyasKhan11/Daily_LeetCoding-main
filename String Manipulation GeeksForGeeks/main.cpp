class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string> st;
        for(int i=0;i<arr.size();i++){
            if(st.empty()){
                st.push(arr[i]);
            }
            else{
                string topMost=st.top();
                if(topMost==arr[i]){
                    st.pop();
                }else{
                    st.push(arr[i]);
                }
            }
        }
        return st.size();
    }
};