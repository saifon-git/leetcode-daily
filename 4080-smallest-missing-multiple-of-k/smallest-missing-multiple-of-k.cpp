class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>mp(nums.begin(),nums.end());
        int multi = k;

        while(mp.find(multi)!=mp.end()){
            multi+=k;
        }
        return multi;

    }
};