class Solution {
public:
    vector<vector<int>>ans;
    void swap(vector<int>& nums,int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    void solve(vector<int>& nums,int start){
        int end = nums.size();

        if(start==end){
            ans.push_back(nums);
            return ;
        }

        for(int i=start;i<end;i++){
            swap(nums,start,i);
            solve(nums,start+1);
            swap(nums,start,i);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       solve(nums,0);
       return ans;
    }
};