class Solution {
public:
    void solve(vector<int> nums,vector<vector<int>> &ans,int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return ;
        }

        vector<int> visited(21,0);
        for(int i=index;i<nums.size();i++){
            if(visited[nums[i]+10]==0){
                visited[nums[i]+10]=1;
                swap(nums[i],nums[index]);
                solve(nums,ans,index+1);
                swap(nums[i],nums[index]);

            }

        }
    }


    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums,ans,0);
        return ans;
    }
};