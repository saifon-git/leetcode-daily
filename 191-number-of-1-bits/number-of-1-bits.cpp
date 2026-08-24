class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;

        while(n>0){
            int k = n%2;
            if(k==1){
                res++;
            }
                n = n/2;
        }
        return res;
    }
};