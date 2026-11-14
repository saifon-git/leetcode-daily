class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        vector<int>cnt(24,0);

        int result = 0;
    
    for(int i=0;i<24;i++){
    
        for(int &num:candidates){
            if((num & (1<<i))!=0){
                cnt[i]++;

            }
        }
        result = max(result,cnt[i]);
    }
    return result;
    }
};