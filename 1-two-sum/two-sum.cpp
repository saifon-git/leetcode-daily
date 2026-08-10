class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            int remain = target-nums[i];

            for(int j=0;j<i;j++){
                if(nums[j] == remain)return {j,i};
            }
        }
        return {};
    }
};