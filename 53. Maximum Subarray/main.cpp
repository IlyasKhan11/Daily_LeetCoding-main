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




























5. uni study Math(9.6,9.7,10.2)
2.  project complete
3. dsa strivers section ( 3.5, 4,  5 , 7 8 9,11,13,14,15.25)
6. sql 80%
1. ML specailzatoin
4. ML book till chapter 5
7. data analyst more learning.
8. discrete mathemetics



