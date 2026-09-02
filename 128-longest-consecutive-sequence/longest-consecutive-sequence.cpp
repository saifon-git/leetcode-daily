class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())return 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int maxl = 1;
        int cnt = 1;

        for(int i = 1;i<n;i++){
            if(nums[i]==nums[i-1])continue;
            else if(nums[i]==nums[i-1]+1)cnt++;
            else cnt = 1;

            maxl = max(maxl,cnt);
        }
        return maxl;
    }
};