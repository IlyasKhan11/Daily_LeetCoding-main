class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        
        stack<int>s;
        
        for(int i=0;i<arr.size();i++){
            if(s.empty()){
                s.push(arr[i]);
            }else if((arr[i]>=0&&s.top()>=0)||(arr[i]<0&&s.top()<0)){
                s.push(arr[i]);
            }else{
                s.pop();
            }
        }
        
        vector<int>v(s.size());
        int i=s.size()-1;
        while(!s.empty()){
            v[i]=s.top();
            s.pop();
            i--;
        }
        
        return v;
    }
};