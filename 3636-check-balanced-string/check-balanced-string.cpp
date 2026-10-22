class Solution {
public:
    bool isBalanced(string num) {
        
        vector<int>ans;
        for(int i=0;i<num.size();i++)ans.push_back(num[i]-'0');

       
        int n = ans.size();
        int even = 0;
        int odd = 0;

        for(int j=0;j<n;j++){
            if(j%2)odd+=ans[j];
            else even+=ans[j];
        }
        return even==odd;
    }
};