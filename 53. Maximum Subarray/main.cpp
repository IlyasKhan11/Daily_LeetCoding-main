class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csumm=0;
        int maxs=INT_MIN;

        for(int i=0;i<nums.size();i++){
            csumm+=nums[i];
            maxs=max(csumm,maxs);
            if(csumm<0){
                csumm=0;
            }
        }
        return maxs;
    }
};