class Solution {
public:
    bool isvowel(char ch){
        return ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
    }
    int maxVowels(string s, int k) {
        int n= s.size();
        int i=0;
        int j=0;

        int sum = 0;
        int maxv = 0;

        while(j<n){
            if(isvowel(s[j]))sum++;
            if(j-i+1==k){
                maxv = max(maxv,sum);

                if(isvowel(s[i]))sum--;
                i++;
            }
            j++;
        }
        return maxv;
        
    }
};