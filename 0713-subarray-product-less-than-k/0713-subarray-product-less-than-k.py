class Solution:
    def numSubarrayProductLessThanK(self, nums: list[int], k: int) -> int:
        if k <= 1:
            return 0
        left = 0
        count = 0
        s = 1
        for right in range(len(nums)):
            s = s * nums[right]
            while s >= k:
                s = s // nums[left]
                left += 1
            count += right - left + 1
        return count
