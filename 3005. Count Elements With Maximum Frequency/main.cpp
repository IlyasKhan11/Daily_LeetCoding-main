class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans=0;
        map<int,int>m;
        for(int n:nums){
            m[n]++;
        }
        int maxf=0;
        for (auto [num,f] : m) {
            maxf=max(maxf,f);
        }

        for(auto [num,f]:m){
            if(f==maxf) ans+=f;
        }
        return ans;
    }
};