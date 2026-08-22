class Solution {
public:
    int maxsum(vector<int>maxnum){
        int cursum = maxnum[0];
        int maxsum = maxnum[0];

        for(int i=1;i<maxnum.size();i++){
            cursum = max(maxnum[i],cursum + maxnum[i]);
            maxsum = max(maxsum,cursum);
        }
        return maxsum;
    }

    int minsum(vector<int>minnum){
        int minsum = minnum[0];
        int cursum = minnum[0];

        for(int i=1;i<minnum.size();i++){
            cursum = min(minnum[i],cursum+minnum[i]);
            minsum = min(minsum,cursum);
        }
        return minsum;
    }

    int maxAbsoluteSum(vector<int>& nums) {
    
        int p = max(maxsum(nums),abs(minsum(nums)));
        return p;
    }
};