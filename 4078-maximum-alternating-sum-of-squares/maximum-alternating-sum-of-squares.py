class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        n = len(nums)

        for i in range(n):
            nums[i] = nums[i]*nums[i]
        
        nums.sort()

        sumMin = 0
        for i in range(n//2):
            sumMin+=nums[i]
        
        sumMax = 0
        for i in range(n//2,n):
            sumMax +=nums[i]

        return sumMax - sumMin