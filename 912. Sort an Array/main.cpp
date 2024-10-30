class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>,greater<int>>pr;

        for(int i=0;i<nums.size();i++){
            pr.push(nums[i]);
        }

        vector<int>ans;

        int size=pr.size();
        for(int i=0;i<size;i++){
            nums[i]=pr.top();
            pr.pop();
        }
        return nums;
    }
};