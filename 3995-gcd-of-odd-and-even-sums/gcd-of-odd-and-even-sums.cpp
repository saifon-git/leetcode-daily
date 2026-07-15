class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int k = __gcd(n*n,n*(n-1));
        return k;
    }
};