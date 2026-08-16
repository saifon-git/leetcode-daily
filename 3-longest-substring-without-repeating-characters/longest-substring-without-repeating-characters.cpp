class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0,j=0;
        int maxl=0;
        int n = s.size();

        while(j<n){
            mp[s[j]]++;

            while(mp[s[j]]>1){
                mp[s[i]]--;

                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
                
                
            }
            maxl = max(maxl,j-i+1);
            j++;
        }
        return maxl;
    }
};