class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        s = 0
        mn = float('inf')
        left = 0

        for right in range(len(nums)):
            s += nums[right]
            while s>=target:
                mn = min(mn, right - left + 1)
                s-=nums[left]
                left+=1


        return 0 if mn == float('inf') else mn