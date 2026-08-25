class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x = 0;
        int n = nums.size();

        for(int num:nums){
            x = x^num;
        }
        int res = x^k;

        int ans = 0;

        while(res>0){
            res = res&(res-1);
            ans++;
        }
        return ans;
    }
};