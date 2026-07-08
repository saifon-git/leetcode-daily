class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vowel = {'a','e','i','o','u'}

        n = len(s)

        i=0
        j=0

        cnt = 0
        max_vowel = 0

        while j<n:
            if s[j] in vowel:
                cnt +=1
            if j-i+1 == k:
                max_vowel = max(max_vowel,cnt)

                if s[i] in vowel:
                    cnt-=1
                i+=1
            j+=1
        return max_vowel
        