class Solution {
public:
    bool isvowel(char ch){
        ch = tolower(ch);
        return ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u';
    }

    string reverseVowels(string s) {
        int n = s.size();
        int i=0,j=n-1;

        while(i<j){
            if(!isvowel(s[i]))i++;
            else if(!isvowel(s[j]))j--;
            else{
                 swap(s[i],s[j]);

            i++;
            j--;
            }
        }
        return s;
    }
};