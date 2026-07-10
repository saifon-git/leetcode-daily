class Solution(object):
    def numSubarrayProductLessThanK(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        n= len(nums)
        cnt=0
        i=0
        prod = 1

        for j in range(n):
            prod*=nums[j]

            while prod>=k:
                prod = prod/nums[i]
                i+=1
            cnt += j-i+1
        return cnt