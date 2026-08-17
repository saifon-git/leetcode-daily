class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char,int>mp;
        int maxl = 0;
        int maxf = 0;
        int i=0;

        for(int j=0;j<n;j++){
            mp[s[j]]++;
            maxf = max(maxf,mp[s[j]]);
        while((j-i+1) - maxf > k){
            mp[s[i]]--;
            i++;

        }
        maxl = max(maxl,j-i+1);
        }
        return maxl;
    }
};