class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int ,int>mp;
        int i=0,j=0;
        int maxl = 0;
        int n = fruits.size();
        if(n ==1)return 1;

        while(j<n){
            mp[fruits[j]]++;
            while(mp.size()>2){
                mp[fruits[i]]--;

                if(mp[fruits[i]]==0)mp.erase(fruits[i]);
                i++;
            }
            
            maxl = max(maxl,j-i+1);
            j++;
        }
        return maxl;
    }
};