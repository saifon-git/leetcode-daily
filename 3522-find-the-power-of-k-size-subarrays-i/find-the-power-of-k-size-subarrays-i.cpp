class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        
        int n = nums.size();

        vector<int>ans;

        for(int i=0;i<=n-k;i++){
            bool valid = true;
            int maxv = nums[i];

            for(int j=i+1;j<i+k;j++){
                maxv = max(maxv,nums[j]);

                if(nums[j]!=nums[j-1]+1) valid = false;
            }
            if(valid)ans.push_back(maxv);
            else ans.push_back(-1);
        }
        return ans;
    }
};