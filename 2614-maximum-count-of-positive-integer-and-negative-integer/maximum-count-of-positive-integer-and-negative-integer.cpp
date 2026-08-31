class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int cntn = 0;
        int cntp = 0;

        for(int num:nums){
            if(num<0)cntn++;
        }
        for(int num:nums){
            if(num>0)cntp++;
        }
        return max(cntp,cntn);
        
    }
};