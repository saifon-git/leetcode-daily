class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>mp(nums.begin(),nums.end());
        int multi = k;

        while(mp.count(multi)){
            multi+=k;
        }
        return multi;

    }
};