class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        long sumMin = 0;
        for(int i=0;i<n/2;i++){
            sumMin += nums[i];
        }
        long sumMax =0;
        for(int i=n/2;i<n;i++){
            sumMax += nums[i];
        }
        return sumMax - sumMin;
    }
};