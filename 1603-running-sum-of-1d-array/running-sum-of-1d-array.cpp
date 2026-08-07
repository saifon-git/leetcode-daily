class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>prefix(nums.size(),0);

        int n = nums.size();
        prefix[0] = nums[0];

        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        return prefix;
    }
};