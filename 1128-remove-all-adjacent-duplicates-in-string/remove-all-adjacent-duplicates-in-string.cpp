class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char>st;
        string result;

        for(int i=0;i<n;i++){
            if(!st.empty() && st.top()==s[i])st.pop();
            else st.push(s[i]);
        }
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};